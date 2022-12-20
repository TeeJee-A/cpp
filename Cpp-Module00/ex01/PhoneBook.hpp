#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <cctype>
#include <bits/stdc++.h>
#include <sstream>
#include <fstream>
#include "Contact.hpp"

class PhoneBook{
private:
    Contact Contact[8];
    int ContactLen;
    int index;
public:
    void AddCommand();
    void SearchCommand();
    PhoneBook();
    ~PhoneBook();
};

#endif