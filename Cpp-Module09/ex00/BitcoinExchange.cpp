#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
    std::cout << "default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(std::string file, std::string filedata) {
    __file = file;
    __filedata = filedata;
    std::cout << "parametrized costructor called" << std::endl;
}

void    BitcoinExchange::fill_data_base() {
    
}

std::string BitcoinExchange::get_file() {
    return __file;
}

std::string BitcoinExchange::get_file_data() {
    return __filedata;
}

BitcoinExchange::~BitcoinExchange() {
    std::cout << "Destructor called" << std::endl;
}
