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
    f_table operations[] = {debug, info, warning, error};

    int call_level = stoi(level);
    if (call_level>0 && call_level <=3)
        operations[call_level];
    else
        std::cerr << "level is 0-4." << std::endl;
}

typedef void (Harl::*f_table)(void);//ret: void, owner: Harl::, pointer_variable_name:*f_table, arg_type:void.

void call_from_level(std::string level)
{
    f_table operations[] = {debug, info, warning, error};
    int call_level = stoi(level);
    switch(call_level)
    {
        case 3:
            Harl::complain(ERROR);
            break;
        case 2:
            Harl::complain(WARNING);
            Harl::complain(ERROR);
        case 1:
            Harl::complain(INFO);
            Harl::complain(WARNING);
            Harl::complain(ERROR);
            break;
        case 0:
            Harl::complain(DEBUG);
            Harl::complain(INFO);
            Harl::complain(WARNING);
            Harl::complain(ERROR);
        default:
            std::cerr << "function level is not appropriate." << std::endl;
    }
}
