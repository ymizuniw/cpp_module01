#include "Zombie.hpp"

void print_msg(std::string msg)
{
    std::cout << msg << std::endl;
}

Zombie::Zombie(std::string name) : name_(name)
{
    print_msg("Zombie constructed.");
}

Zombie::~Zombie(void)
{
    print_msg("Zombie destructed.");
}

void Zombie::announce(void)
{
    std::cout << name_  << ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}
