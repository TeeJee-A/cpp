#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>
#include <string>
#include <ctype.h>
#include <limits>

int             how_many_days(int month, int year);
bool            is_double_digit(std::string value);
std::string     parse_value(std::string value, std::string date);
std::string     parse_date(int year, int month, int day, std::string saved, int flag);
std::string     check_before_number(std::string date, int flag);
void            parse_exchange_rate(std::string value);
std::string     delete_space(std::string data);
int             calcul_delim(std::string data, std::string delim);
int             count_words(std::string str, char delim);
std::string     *split(std::string data, std::string delim);
void            execute(std::string key, std::string value, std::map<std::string, std::string> database);
std::string     check_before_value(std::string value);
void            fill_input_database(std::string name_of_file);

#endif
