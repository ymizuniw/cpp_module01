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
    std::cerr << "[WARNIGN]: warning() is called." << std::endl;
}

void Harl::error(void)
{
    std::cerr << "[ERROR]: error() is called." << std::endl;
}

typedef void (Harl::*f_table)(void);//ret: void, owner: Harl::, pointer_variable_name:*f_table, arg_type:void.

void Harl::complain(std::string level)
{
    //table of above functions.
    f_table operations[] = {
        &Harl::debug, 
        &Harl::info, 
        &Harl::warning, 
        &Harl::error
    };

    int call_level;
    try{
        call_level = stoi(level);
    } catch (const std::invalid_argument &e){
        std::cerr << "input level:" << e.what() << std::endl;
        return ;
    } catch (const std::out_of_range &e){
        std::cerr << "input level:" << e.what() << std::endl;
        return ;
    }
    if (call_level>=0 && call_level <=3)
        (this->*operations[call_level])();
    else
        std::cerr << "level is 0-3." << std::endl;
}
