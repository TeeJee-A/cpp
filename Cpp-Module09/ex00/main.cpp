#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    std::string file;
    if (ac == 2) {
        file = av[1];
        BitcoinExchange Bit(file, "data.csv");
        Bit.fill_data_base();
    } else {
        std::cout << "Error: could not open file" << std::endl;
    }
}
