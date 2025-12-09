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

typedef void (Harl::*f_table)(void);

void Harl::complain(std::string level)
{
    static const std::string messages[4]={
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    f_table operations[4] = {
        &Harl::debug, 
        &Harl::info, 
        &Harl::warning, 
        &Harl::error
    };
    
    int level_n = 0;
    while (level_n<4 && level.compare(messages[level_n]))
        level_n++;
    if (level_n>=0 && level_n <=3)
        (this->*operations[level_n])();
}
