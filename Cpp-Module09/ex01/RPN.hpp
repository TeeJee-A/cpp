#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>
#include <string>
#include <ctype.h>
#include <limits>

bool    is_operator(char *operations);
bool    parse_operations(char *operations);
void    execute(char *operations);
void    begin(char *operations);

#endif
