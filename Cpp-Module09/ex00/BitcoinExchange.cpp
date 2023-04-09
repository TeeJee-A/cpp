#include "BitcoinExchange.hpp"

int flaginput = 0;
int flagdata = 0;

int how_many_days(int month, int year) {
    int number_of_days;
    switch (month)
    {
        case 1:
            number_of_days = 31;
            break;
        case 2:
            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
                number_of_days = 29;
            else
                number_of_days = 28;
            break;
        case 3:
            number_of_days = 31;
            break;
        case 4:
            number_of_days = 30;
            break;
        case 5:
            number_of_days = 31;
            break;
        case 6:
            number_of_days = 30;
            break;
        case 7:
            number_of_days = 31;
            break;
        case 8:
            number_of_days = 31;
            break;
        case 9:
            number_of_days = 30;
            break;
        case 10:
            number_of_days = 31;
            break;
        case 11:
            number_of_days = 30;
            break;
        default:
            number_of_days = 31;
            break;
    }
    return number_of_days;
}

bool is_double_digit(std::string value) {
    for (size_t i = 0; i < value.size(); i++) {
        if (!isdigit(value[i]) && value[i] != '.')
            return false;
    }
    return true;
}

std::string    parse_value(std::string value, std::string date) {
    if (atof(value.c_str()) < 0) {
        std::cout << "Error: not a positive number." << std::endl;
        return "";
    }
    if (atof(value.c_str()) > 1000) {
        std::cout << "Error: too large a number." << std::endl;
        return "";
    }
    if (!is_double_digit(value)) {
        std::cout << "Error: bad input => " << date << std::endl;
        return "";
    }
    return value;
}

std::string    parse_date(int year, int month, int day, std::string saved, int flag) {
    if (year < 2009 || month < 1 || day < 1) {
        if (flag == 1) {
            std::cout << "Error: database failed." << std::endl;
            exit(1);
        } else {
            std::cout << "Error: bad input => " << saved << std::endl;
            return "";
        }
    }
    else if (year > 2022 || month > 12){
        if (flag == 1) {
            std::cout << "Error: database failed." << std::endl;
            exit(1);
        } else {
            std::cout << "Error: bad input => " << saved << std::endl;
            return "";
        }
    }
    else if (day > how_many_days(month, year)) {
        if (flag == 1) {
            std::cout << "Error: database failed." << std::endl;
            exit(1);
        } else {
            std::cout << "Error: bad input => " << saved << std::endl;
            return "";
        }
    }
    return saved;
}

std::string check_before_number(std::string date, int flag) {
    if (date.empty())
        return "";
    char **ymd = new char*[date.length() + 1];
    size_t i = 0;
    char *token;
    char *cstr = new char[date.length() + 1];
    std::strcpy(cstr, date.c_str());
    token = strtok(cstr, "-");
    while (token != NULL) {
        ymd[i] = token;
        token = strtok(NULL, "-");
        i++;
    }
    if (i < 3) {
        if (flag == 1) {
            std::cout << "Error: database failed." << std::endl;
            exit(1);
        }
    } else {
        int y, m, d;
        y = atoi(ymd[0]);
        m = atoi(ymd[1]);
        d = atoi(ymd[2]);
        date = parse_date(y, m, d, date, flag);
        if (date.empty()) {
            delete[] ymd;
            delete[] cstr;
            return "";
        }
        std::string year(ymd[0]), month(ymd[1]), day(ymd[2]);
        if (month.size() == 1)
            month.replace(0, month.size(), "0" + month);
        if (day.size() == 1)
            day.replace(0, day.size(), "0" + day);
        date = year + "-" + month + "-" + day;
    }
    delete[] ymd;
    delete[] cstr;
    return date;
}

void    parse_exchange_rate(std::string value) {
    if (atof(value.c_str()) < 0) {
        std::cout << "Error: database failed." << std::endl;
        exit (1);
    }
}

std::string delete_space(std::string data) {
    size_t found = 0;
    while ((found = data.find(" ", found)) != std::string::npos)
        data.replace(found, 1, "");
    return data;
}

int calcul_delim(std::string data, std::string delim) {
    size_t found = 0;
    int counter = 0;
    while ((found = data.find(delim, found)) != std::string::npos) {
        data.replace(found, 1, "");
        counter++;
    }
    return counter;
}

int	count_words(std::string str, char delim)
{
	int	i;
	int	count;
	int	flag = 0;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != delim && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (str[i] == delim)
			flag = 0;
		i++;
	}
	return (count);
}

std::string *split(std::string data, std::string delim) {
    const char *del = delim.c_str();
    std::string *splited = new std::string[count_words(data, *del) + 1];
    int i = 0;
    std::stringstream ss(data);
    std::string item;
    while (std::getline(ss, item, *del)) {
        if (!item.empty()) {
            splited[i] = item;
            i++;
        }
    }
    return splited;
}

void    execute(std::string key, std::string value, std::map<std::string, std::string> database) {
    double val = atof(value.c_str());
    std::map<std::string, std::string>::iterator it = database.upper_bound(key);
    it--;
    double ret = val * atof(it->second.c_str());
    std::cout << key << " => " << value << " = " << ret << std::endl;
}

std::string check_before_value(std::string value) {
    if (value[0] == '.')
        value = "0" + value;
    return value;
}

void    fill_input_database(std::string name_of_file) {
    std::map<std::string, std::string> database;
    std::ifstream input_file;
    std::ifstream data_file;
    std::string data;
    int flag = 0;
    int k = 0;
    input_file.open(name_of_file);
    data_file.open("data.csv");
    if (!input_file || !data_file) {
        perror("Error");
        return ;
    } else {
        std::string delim1 = ",";
        std::string delim2 = "|";
        const char *del1 = delim1.c_str();
        const char *del2 = delim2.c_str();
        std::string data_input;
        std::string data_base;
        std::string *helper;
        while (getline(data_file, data_base)) {
            if (data_base == "date,exchange_rate" && k == 0)
                continue ;
            k++;
            helper = split(data_base, ",");
            if (count_words(data_base, *del1) != 2 || helper->size() == 1) {
                std::cout << "Error: database failed" << std::endl;
                exit (1);
            }
            std::string key = helper[0];
            std::string value = helper[1];
            delete[] helper;
            key = delete_space(key);
            value = delete_space(value);
            parse_exchange_rate(value);
            key = check_before_number(key, 1);
            value = check_before_value(value);
            database.insert(std::make_pair(key, value));
        }
        data_file.close();
        while (getline(input_file, data_input)){
            if (data_input == "date | value" && flag == 0)
                continue ;
            flag++;
            helper = split(data_input, del2);
            if (count_words(data_input, *del2) != 2 || helper->size() == 1) {
                std::cout << "Error: bad input => " << data_input << std::endl;
                delete[] helper;
                continue ;
            }
            std::string key = helper[0];
            std::string value = helper[1];
            delete[] helper;
            key = delete_space(key);
            value = delete_space(value);
            value = parse_value(value, data_input);
            key = check_before_number(key, 0);
            if (value.empty() || key.empty())
                continue ;
            value = check_before_value(value);
            execute(key, value, database);
        }
        input_file.close();
    }
}
