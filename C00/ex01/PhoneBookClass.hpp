#ifndef PHONEBOOKCLASS_HPP
#define PHONEBOOKCLASS_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include "library.h"
class PhoneBook
{

private:
    Contact contact[8];
    int counter;

public:
    PhoneBook() : counter(0) {};
    void addContact()
    {
        if (counter < 8)
        {
            contact[counter].createContact();
            counter++;
        }
        else
        {
            std::cout << "Max limit of contacts reached" << std::endl;
            for (size_t i = 1; i < 8; i++)
                contact[i - 1] = contact[i];
            contact[7].createContact();
        }
    }

    void searchContact() const
    {
        int index;
        if (counter == 0)
        {
            std::cout << "No contacts available to search. Please add a contact first." << std::endl;
            return;
        }
        std::cout << "_____________________________________________" << std::endl;
        contact->displayHeader();
        std::cout << "_____________________________________________" << std::endl;
        for (int i = 0; i < counter; i++)
            contact[i].displaySummary(i + 1);
        std::cout << "_____________________________________________" << std::endl;
        if (counter > 0)
        {
            std::cout << "Please insert the index of the contact that you want to see : ";
            std::cin >> index;
            std::cin.ignore();
            if (std::cin.fail())
            {
                std::cout << "Invalid index" << std::endl;
                std::cin.clear();                                                   // Clear the error state
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
            }
            else if (index >= 0 && index <= counter)
                contact[index - 1].displayInformation();
            else
                std::cout << "Ivalid does not exist" << std::endl;
        }
        return;
    }
};

#endif