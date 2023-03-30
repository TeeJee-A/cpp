#include "RPN.hpp"

std::stack<int> stack;

bool is_operator(char *operations) {
    if (!strcmp(operations, "+") || !strcmp(operations, "-") || !strcmp(operations, "*") || !strcmp(operations, "/"))
        return true;
    return false;
}

bool parse_operations(char *operations) {
    if (is_operator(operations))
        return true;
    else {
        size_t i = -1;
        while (operations[++i]) {
            if (isdigit(operations[i]))
                return true;
        }
    }
    return false;
}

void execute(char *operations) {
    int result = 0;
    int oper = atoi(operations);
    if (stack.size() > 1 && is_operator(operations)) {
        int one = stack.top();
        stack.pop();
        int two = stack.top();
        stack.pop();
        if (operations[0] == '+')
            result = two + one;
        else if (operations[0] == '-')
            result = two - one;
        else if (operations[0] == '*')
            result = two * one;
        else if (operations[0] == '/')
            result = two / one;
        stack.push(result);
    } else {
        stack.push(oper);
    }
}

void begin(char *operations) {
    char *token;
    token = strtok(operations, " ");
    while (token != NULL) {
        if (!parse_operations(token)) {
            std::cout << "Error" << std::endl;
            return ;
        }
        execute(token);
        token = strtok(NULL, " ");
    }
    std::cout << stack.top() << std::endl;
}
