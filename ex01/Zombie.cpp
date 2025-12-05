#include "Zombie.hpp"

void print_msg(std::string msg)
{
    std::cout << msg << std::endl;
}

void Zombie::set_name(std::string name)
{
    name_=name;
}

Zombie::Zombie(void)
{
    print_msg("Zombie constructed.");
}

Zombie::~Zombie()
{
    print_msg("Zombie destructed.");
}

void Zombie::announce(void)
{
    std::cout << name_ << ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}
