#include "PmergeMe.hpp"

unsigned int k = 5;

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

bool check_spaces(std::string av) {
    for (size_t i = 0; i < av.size(); i++)
        if (av[i] == ' ')
            return true;
    return false;
}

bool is_digit(std::string av) {
    int i = 0;
    while (av[i]) {
        if (!isdigit(av[i])) {
            std::cout << "Error" << std::endl;
            return false;
        }
        i++;
    }
    return true;
}

template <typename T>
void display(const T& container, int flag) {
    if (flag == 0) {
        std::cout << "before: ";
        for (size_t i = 0; i < container.size(); i++)
            std::cout << container[i] << " ";
        std::cout << std::endl;
    } else {
        std::cout << "after: ";
        for (size_t i = 0; i < container.size(); i++)
            std::cout << container[i] << " ";
        std::cout << std::endl;
        std::cout << "════════════════════════════════════════════════════════════" << std::endl;
    }
}

template <typename T>
bool check_if_sorted(T& container) {
    for (size_t i = 0; i < container.size(); i++) {
        for (size_t j = 1; j < container.size(); j++) {
            if (container[i] > container[j])
                return false;
        }
    }
    return true;
}

template <typename T>
void insertionSort(T& container) {
    for (size_t i = 0; i < container.size(); i++) {
        for (size_t j = i + 1; j < container.size(); j++) {
            if (container[i] > container[j])
                std::swap(container[i], container[j]);
        }
    }
}

template <typename T>
void mergeSort(T& container, size_t begin, size_t mid, size_t end) {
    size_t OneSize = mid - begin + 1, TwoSize = end - mid;
    T One(OneSize), Two(TwoSize);
    for (size_t i = 0; i < OneSize; i++)
        One[i] = container[begin + i];
    for (size_t i = 0; i < TwoSize; i++)
        Two[i] = container[mid + 1 + i];
    size_t i = 0, j = 0, k = begin;
    while (i < OneSize && j < TwoSize) {
        if (One[i] <= Two[j]) {
            container[k] = One[i];
            i++;
        } else {
            container[k] = Two[j];
            j++;
        }
        k++;
    }
    while (i < OneSize) {
        container[k] = One[i];
        i++;
        k++;
    }
    while (j < Two.size()) {
        container[k] = Two[j];
        j++;
        k++;
    }
}

template <typename T>
void sort(T& container, size_t begin, size_t end) {
    if (end - begin > k) {
        size_t mid = begin + (end - begin) / 2;
        sort(container, begin, mid);
        sort(container, mid + 1, end);
        mergeSort(container, begin, mid, end);
    } else {
        insertionSort(container);
    }
}

void begin(int ac, char **av) {
    int i = 1;
    (void)ac;
    std::vector<int> vec;
    std::deque<int> deq;
    struct timeval tv, tc, td, tq;
    std::string *spliter;
    while (av && av[i]) {
        if (strlen(av[i]) == 0 && ac == 2) {
            std::cout << "Error" << std::endl;
            return ;
        }
        spliter = split(av[i], " ");
        int j = -1;
        while (spliter[++j] != "\0") {
            if (!is_digit(spliter[j])) {
                delete[] spliter;
                return ;
            }
            vec.push_back(atoi(spliter[j].c_str()));
            deq.push_back(atoi(spliter[j].c_str()));
        }
        delete[] spliter;
        i++;
    }
    size_t arg = vec.size();
    std::cout << "vector:" << std::endl;
    display(vec, 0);
    gettimeofday(&tv, NULL);
    size_t vec_one = (tv.tv_sec * 1000000) + tv.tv_usec;
    sort(vec, 0, vec.size() - 1);
    gettimeofday(&tc, NULL);
    size_t vec_two = (tc.tv_sec * 1000000) + tc.tv_usec;
    display(vec, 1);
    std::cout << "deque:" << std::endl;
    display(deq, 0);
    gettimeofday(&td, NULL);
    size_t deq_one = (td.tv_sec * 1000000) + td.tv_usec;
    sort(deq, 0, deq.size() - 1);
    gettimeofday(&tq, NULL);
    size_t deq_two = (tq.tv_sec * 1000000) + tq.tv_usec;
    display(deq, 1);
    std::cout << "Time to process a range of " << arg << " elements with std::vector : " << std::setprecision(5) << std::fixed << (double)(vec_two - vec_one) << " us" << std::endl;
    std::cout << "Time to process a range of " << arg << " elements with std::deque : " << std::setprecision(5) << std::fixed << (double)(deq_two - deq_one) << " us" << std::endl;
}
