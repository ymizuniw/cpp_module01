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

void Harl::complain(std::string level)
{
    //function table basic form.
    void (*name)(void);
    //table of above functions.
    f_table operations[] = {debug, info, warning, error};

    int call_level = stoi(level);
    if (call_level>0 && call_level <=3)
        operations[call_level];
    else
        std::cerr << "level is 0-4." << std::endl;
}

