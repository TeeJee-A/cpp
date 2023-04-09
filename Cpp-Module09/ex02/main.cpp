#include "PmergeMe.hpp"

int main(int ac, char **av) {
    if (ac > 1) {
        begin(ac, av);
    } else {
        std::cout << "Error" << std::endl;
        return 1;
    }
}
