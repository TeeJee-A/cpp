#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

class BitcoinExchange {
    private:
        std::string __file;
        std::string __filedata;
        std::vector<std::string> __database;
    public:
        BitcoinExchange();
        BitcoinExchange(std::string file, std::string filedata);
        void    fill_data_base();
        std::string get_file();
        std::string get_file_data();
        ~BitcoinExchange();
};

#endif
