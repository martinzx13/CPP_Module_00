#include "library.h"


int main()
{
    PhoneBook phonebook;

    std::string command;

    while(true)
    {
        std::cout << "Please enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
        {
            phonebook.searchContact();
        }
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command : Please enter ADD - SEARCH or EXIT" << std::endl;
    }
}
