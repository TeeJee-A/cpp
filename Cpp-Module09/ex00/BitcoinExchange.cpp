#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
    std::cout << "default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(std::string file, std::string filedata) {
    __file = file;
    __filedata = filedata;
    std::cout << "parametrized costructor called" << std::endl;
}

std::vector<std::string> split(const std::string &s, char delim) {
    std::vector<std::string> result;
    std::stringstream string(s);
    std::string item;
    while (std::getline(string, item, delim)) {
        if (!item.empty())
            result.push_back(item);
    }
    return result;
}

void    BitcoinExchange::fill_data_base() {
    std::ifstream input_file;
    input_file.open(this->__filedata);
    std::string data;
    if (!input_file) {
        perror("Error");
        return ;
    } else {
        std::string database;
        while (getline(input_file, database))
            data += database + "\n";
        this->__database = split(data, '\n');
    }
}

void    BitcoinExchange::fill_data_input() {
    std::ifstream input_file;
    input_file.open(this->__file);
    std::string data;
    if (!input_file) {
        perror("Error");
        return ;
    } else {
        std::string datainput;
        while (getline(input_file, datainput))
            data += datainput + "\n";
        this->__datainput = split(data, '\n');
    }
}

std::string BitcoinExchange::get_file() {
    return this->__file;
}

std::string BitcoinExchange::get_file_data() {
    return this->__filedata;
}

std::vector<std::string> BitcoinExchange::get_data_base() {
    return this->__database;
}

std::vector<std::string> BitcoinExchange::get_data_input() {
    return this->__datainput;
}

BitcoinExchange::~BitcoinExchange() {
    std::cout << "Destructor called" << std::endl;
}
