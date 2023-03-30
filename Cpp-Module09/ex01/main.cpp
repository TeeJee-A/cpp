#include "RPN.hpp"

int main(int ac, char **av) {
    if (ac == 2)
        begin(av[1]);
    else 
        std::cout << "Error" << std::endl;
}
