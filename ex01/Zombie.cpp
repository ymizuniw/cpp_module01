#include "Zombie.hpp"

Zombie::Zombie()
{
    print_msg("Zombie constructed.");
}

Zombie::~Zombie()
{
    print_msg("Zombie destructed.");
}

void Zombie::announce(void)
{
    std::cout << "<" << name_ << ">" << ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}
