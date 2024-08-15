#include "library.h"

int main(int argc, char *argv[])
{
    Contact contact;

    std::string str;

    do{
        std::cout << "Please enter a comand to continue : ";
        std::getline(std::cin, str);
        if (str.compare("ADD") == 0)
            contact.createContact();
        else if (str.compare("SEARCH") == 0)
            std::cout << "fail" << std::endl;
        else
            std::cout << "The program only accepts ADD, SEARCH and EXIT " << std::endl;
    }
    while (str.compare("EXIT") != 0);

}


