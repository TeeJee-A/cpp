#include "RPN.hpp"

int main(int ac, char **av) {
    if (ac == 2) {
        if (strlen(av[1]) == 0) {
            std::cout << "Error" << std::endl;
            return 1;
        }
        begin(av[1]);
    }
    else {
        std::cout << "Error" << std::endl;
        return 1;
    }
}
