#include "Harl.hpp"

    // private:
    //     void debug(void);
    //     void info(void);
    //     void warning(void);
    //     void error(void);
    // public:
    //     void complain(std::string level);

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
    std::cerr << "[WARNIGN]: warning() is called." << std::endl;
}

void Harl::error(void)
{
    std::cerr << "[ERROR]: error() is called." << std::endl;
}

typedef void (Harl::*f_table)(void);//ret: void, owner: Harl::, pointer_variable_name:*f_table, arg_type:void.

#define DEBUG "0"
#define INFO "1"
#define WARNING "2"
#define ERROR "3"

void Harl::complain(std::string level)
{
    //table of above functions.
    f_table operations[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    int call_level = stoi(level);
    if (call_level>=0 && call_level <=3)
        (this->*operations[call_level])();
    else
        std::cerr << "level is 0-3." << std::endl;
}

typedef void (Harl::*f_table)(void);//ret: void, owner: Harl::, pointer_variable_name:*f_table, arg_type:void.

void Harl::call_from_level(std::string level)
{
    Harl harl;
    f_table operations[] = {&Harl::debug, &Harl::info,&Harl::warning, &Harl::error};
    int call_level = stoi(level);
    switch(call_level)
    {
        case 3:
            harl.complain(ERROR);
            break;
        case 2:
            harl.complain(WARNING);
            harl.complain(ERROR);
        case 1:
            harl.complain(INFO);
            harl.complain(WARNING);
            harl.complain(ERROR);
            break;
        case 0:
            harl.complain(DEBUG);
            harl.complain(INFO);
            harl.complain(WARNING);
            harl.complain(ERROR);
        default:
            std::cerr << "function level is not appropriate." << std::endl;
    }
}
