#include "Contact.hpp"

void Contact::setFirstName(std::string FN){
    FirstName = FN;
}

void Contact::setLastName(std::string LN){
    LastName = LN;
}

void Contact::setNickName(std::string NN){
    NickName = NN;
}

void Contact::setPhoneNumber(std::string PN){
    PhoneNumber = PN;
}

void Contact::setDarkestSecret(std::string DS){
    DarkestSecret = DS;
}

std::string Contact::getFirstName(){
    return FirstName;
}

std::string Contact::getLastName(){
    return LastName;
}

std::string Contact::getNickName(){
    return NickName;
}

std::string Contact::getPhoneNumber(){
    return PhoneNumber;
}

std::string Contact::getDarkestSecret(){
    return DarkestSecret;
}
