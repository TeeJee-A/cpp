#include "PhoneBook.hpp"

int main(){
    std::string Commands;
    PhoneBook PhoneBook;
    std::cout << "╔══════════════════════════ PhoneBook ══════════════════════════╗" << std::endl;
    std::cout << "║                                                               ║" << std::endl;
    std::cout << "║ -> Write \"ADD\" to add a new Contact                           ║" << std::endl;
    std::cout << "║ -> Write \"SEARCH\" to find Contact or display list of Contacts ║" << std::endl;
    std::cout << "║ -> Write \"EXIT\" to exit from phonebook                        ║" <<std::endl;
    std::cout << "║                                                               ║" << std::endl;
    std::cout << "╚═══════════════════════════════════════════════════════════════╝" << std::endl;
    while(1){
        std::cout << "Write a Command : ";
        getline(std::cin, Commands);
        if (!std::cin.good())
            break ;
        if (Commands == "ADD"){
            PhoneBook.AddCommand();
            std::cout << "The Contact is added" << std::endl;
        }
        else if (Commands == "SEARCH")
            PhoneBook.SearchCommand();
        else if (Commands == "EXIT")
            break ;
        else
            std::cout << "Command not found" << std::endl;
    }
}
