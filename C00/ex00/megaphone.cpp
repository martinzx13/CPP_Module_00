#include <iostream>

class Megaphone {

public:
    void PrintUpperCases(int num, char **str)
    {
        for(int i = 1; i < num; i++)
            for (int j = 0; j < (str[i][j] != '\0'); j++)
                std::cout << static_cast<char>(toupper(str[i][j]));
    }
};

int main(int argc, char *argv[])
{
    Megaphone megaphone;

    if (argc > 1)
        megaphone.PrintUpperCases(argc, argv);
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    std::cout << std::endl;
}