#ifndef CONTACTCLASS_H
#define CONTACTCLASS_H

# include <iostream>
# include <iomanip>
# include <string>

#include "library.h"
class Contact
{

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    void createContact()
    {
        this->first_name = getInput("first name     : ");
        this->last_name = getInput("last name      : ");
        this->nickname = getInput("nickname       : ");
        this->phone_number = getInput("phone number   : ");
        this->darkest_secret = getInput("darkest secret : ");
        std::cout << "Contact created successfully" << std::endl;
    }

    void displaySummary(int index) const
    {
        std::cout << "|"
                  << std::setw(10) << index << "|"
                  << std::setw(10) << truncateString(first_name) << "|"
                  << std::setw(10) << truncateString(last_name) << "|"
                  << std::setw(10) << truncateString(nickname) << "|"
                  << std::endl;
    }

    void displayInformation() const
    {
        std::cout
            << "First Name : " << first_name << std::endl
            << "Last Name : " << last_name << std::endl
            << "Nickname : " << nickname << std::endl
            << "Phone Number : " << phone_number << std::endl
            << "Darkest Secret : " << darkest_secret << std::endl;
    }

    void displayHeader() const
    {
        std::cout << "|"

                  << std::setw(10) << truncateString("Index") << "|"
                  << std::setw(10) << truncateString("first name") << "|"
                  << std::setw(10) << truncateString("Last name") << "|"
                  << std::setw(10) << truncateString("Nickname") << "|"
                  << std::endl;
    }

private:
    std::string getInput(const std::string &prompt)
    {
        std::string input;
        do
        {
            std::cout << prompt;
            std::getline(std::cin, input);
            if (input.empty())
                std::cout << "Input Error : Please enter a value, can not be empty" << std::endl;
        } while (input.empty());
        return (input);
    }
    std::string truncateString(const std::string str) const
    {
        if (str.length() > 10)
            return (str.substr(0, 9) + ".");
        return (str);
    }
};

#endif
