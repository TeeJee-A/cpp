#include "RPN.hpp"

bool is_operator(char oper) {
    if (oper != '+' && oper != '/' && oper != '-' && oper != '*')
        return false;
    return true;
}

bool parse_operations(std::string operations) {
    for (size_t i = 0; i < operations.size(); i++) {
        if (isdigit(operations[i]))
            return true;
        else if (is_operator(operations[i]))
            return true;
    }
    return false;
}

void execute(std::string operations) {
    
}

void begin(std::string operations) {
    char *token;
    char *cstr = new char[operations.length() - 1];
    std::strcpy(cstr, operations.c_str());
    token = strtok(cstr, " ");
    while (token != NULL) {
        if (!parse_operations(token)){
            std::cout << "Error" << std::endl;
            delete[] cstr;
            return ;
        }
        execute(token);
        token = strtok(NULL, " ");
    }
    delete[] cstr;
}

void f(){
    system("leaks RPN");
}

int main(int ac, char **av) {
    // atexit(f);
    if (ac == 2)
        begin(av[1]);
    else 
        std::cout << "Error" << std::endl;
}
