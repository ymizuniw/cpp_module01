#include "Harl.hpp"

void Harl::debug(void)
{
    std::cerr << "[DEBUG]: debug() is called." << std::endl;
}

void Harl::info(void)
{
    std::cerr << "[INFO]: info() is called." << std::endl;
}

void Harl::warning(void)
{
    std::cerr << "[WARNING]: warning() is called." << std::endl;
}

void Harl::error(void)
{
    std::cerr << "[ERROR]: error() is called." << std::endl;
}

typedef void (Harl::*t_message)(void);

void Harl::complain(std::string level)
{
    static const std::string levels[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"};
    t_message message_table[4] = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error};
    int n = 0;
    while (n < 4 && level.compare(levels[n]))
        n++;
    switch (n)
    {
    case 0:
        (this->*message_table[0])();
    case 1:
        (this->*message_table[1])();
    case 2:
        (this->*message_table[2])();
    case 3:
        (this->*message_table[3])();
        break;
    default:
        return;
    }
}
