#include "PhoneBook.hpp"

std::string getString(std::string Information){
    if (Information.length() > 10)
    {
        Information = Information.substr(0, 10);
        Information[9] = '.';
    }
    return Information;
}

void PhoneBook::AddCommand(){
    std::string FName;
    std::string LName;
    std::string NName;
    std::string PNumber;
    std::string DSecret;
    if (index == 8)
        index = 0;
    while (1){
        std::cout << "First Name : ";
        getline(std::cin, FName);
        if (!std::cin.good())
            break ;
        if (FName.empty())
            continue;
        else{
            FName = getString(FName);
            Contact[index].setFirstName(FName);
            break ;
        }
        std::cout <<index << std::endl;
    }
    while (1){
        std::cout << "Last Name : ";
        getline(std::cin, LName);
        if (!std::cin.good())
            break ;
        if (LName.empty())
            continue;
        else{
            LName = getString(LName);
            Contact[index].setLastName(LName);
            break ;
        }
    }
    while (1){
        std::cout << "Nick Name : ";
        getline(std::cin, NName);
        if (!std::cin.good())
            break ;
        if (NName.empty())
            continue;
        else{
            NName = getString(NName);
            Contact[index].setNickName(NName);
            break;
        }
    }
    while (1){
        std::cout << "Phone Number : ";
        getline(std::cin, PNumber);
        if (!std::cin.good())
            break ;
        if (PNumber.empty())
            continue;
        else{
            PNumber = getString(PNumber);
            Contact[index].setPhoneNumber(PNumber);
            break;
        }
    }
    while (1){
        std::cout << "Darkest Secret : ";
        getline(std::cin, DSecret);
        if (!std::cin.good())
            break ;
        if (DSecret.empty())
            continue;
        else{
            DSecret = getString(DSecret);
            Contact[index].setDarkestSecret(DSecret);
            break ;
        }
    }
    if (ContactLen < 8)
        ContactLen += 1;
    index++;
}

void PhoneBook::SearchCommand(){
    int i = 0;
    std::cout << "╔═══════════════════════════════════════════╗" << std::endl;
    std::cout << "╠═════════════ The phone list ══════════════╣" << std::endl;
    std::cout << "╠═══════════════════════════════════════════╣" << std::endl;
    std::cout << "║" << "  Index   " << "|" << "First Name" << "|" << "Last  Name" << "|" << "Nick  Name" << "║" << std::endl;
    while (i < ContactLen){
        std::cout << "╠═══════════════════════════════════════════╣" << std::endl;
        std::cout << "║" << std::setw(10) << i;
        std::cout << "|" << std::setw(10) << Contact[i].getFirstName();
        std::cout << "|" << std::setw(10) << Contact[i].getLastName();
        std::cout << "|" << std::setw(10) << Contact[i].getNickName();
        std::cout << "║" << std::endl;
        i++;
    }
    if (ContactLen)
        std::cout << "╚═══════════════════════════════════════════╝" << std::endl;
    if (!ContactLen){
        std::cout << "╠═══════════════════════════════════════════╣" << std::endl;
        std::cout << "║          The phone list is empty          ║" << std::endl;
        std::cout << "╚═══════════════════════════════════════════╝" << std::endl;
    }
}

PhoneBook::PhoneBook(){
    ContactLen = 0;
    index = 0;
}

PhoneBook::~PhoneBook(){
}
