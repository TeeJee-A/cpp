#include "RPN.hpp"

std::stack<int> stack;

bool is_operator(char operations) {
    if (operations == '+' || operations == '-' || operations == '/' || operations == '*')
        return true;
    return false;
}

bool parse_operations(char operations) {
    if (is_operator(operations))
        return true;
    else if (isdigit(operations))
        return true;
    return false;
}

void execute(char operations) {
    int result = 0;
    int oper = atoi(&operations);
    if (stack.size() > 1 && is_operator(operations)) {
        int one = stack.top();
        stack.pop();
        int two = stack.top();
        stack.pop();
        if (operations == '+')
            result = two + one;
        else if (operations == '-')
            result = two - one;
        else if (operations == '*')
            result = two * one;
        else if (operations == '/') {
            if (one == 0) {
                std::cout << "Error" << std::endl;
                exit(1);
            }
            result = two / one;
        }
        stack.push(result);
    } else if (!is_operator(operations)) {
        stack.push(oper);
    } else if (stack.size() == 1 && is_operator(operations)) {
        std::cout << "Error" << std::endl;
        exit(1);
    }
}

void begin(char* operations) {
    int i = 0;
    while (operations && operations[i]) {
        if (operations[i] != ' ') {
            if (!parse_operations(operations[i])) {
                std::cout << "Error" << std::endl;
                exit(1);
            }
            execute(operations[i]);
        }
        i++;
    }
    if (stack.size() == 1)
        std::cout << stack.top() << std::endl;
    else {
        std::cout << "Error" << std::endl;
        exit(1);
    }
}
