#ifndef CONTACT_H
#define CONTACT_H

#include<iostream>
#include <cstdlib>

class Contact{
private:
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
public:
    void setFirstName(std::string FN);
    void setLastName(std::string LN);
    void setNickName(std::string NN);
    void setPhoneNumber(std::string PN);
    void setDarkestSecret(std::string DS);
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhoneNumber();
    std::string getDarkestSecret();
};

#endif