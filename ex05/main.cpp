#include "Harl.hpp"

int main(void)
{
    Harl harl;
    std::string input_level;

    for (int i=0;i<3;i++)
    {
        std::cin >> input_level;
        if (std::cin.fail()){
            std::cerr << "invalid input" << std::endl;
            std::cin.clear();
            std::cin.seekg(0);
        }
        else
            harl.complain(input_level);
    }
    return (0);
}
