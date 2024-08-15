#ifndef CONTACTCLASS_H
#define CONTACTCLASS_H

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
            {
                std::cout << "please fill all the data before move : " << std::endl;
            }
        }
        while(input.empty());
        return (input);
    }
};

#endif
