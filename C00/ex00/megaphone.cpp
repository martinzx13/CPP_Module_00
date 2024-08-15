#include <iostream>

void ft_toUpper(int num, char **str)
{
    for (int i = 1; i < num; i++)
    {
        for (int j = 0; str[i][j] != '\0'; j++)
        {
            std::cout << static_cast<char>(toupper(str[i][j]));
        }
    }
}

int main(int argc, char *argv[])
{

    if (argc > 1 && argv)
        ft_toUpper(argc, argv);
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
}