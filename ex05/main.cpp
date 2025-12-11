#include "Harl.hpp"
#include <limits>

int main(void)
{
    Harl harl;
    std::string input_level;

    for (int i = 0; i < 100; i++)
    {
        std::cin >> input_level;
        if (std::cin.eof())
        {
            std::cerr << "EOF" << std::endl;
            return (0);
        }
        else if (std::cin.fail() || std::cin.bad())
        {
            std::cerr << "cin failed!" << std::endl;
            return (1);
        }
        else if (input_level == "exit")
            return (0);
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            harl.complain(input_level);
        }
    }
    return (0);
}
