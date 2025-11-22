#include "Zombie.hpp"

void Zombie::randomChump(std::string name)
{
    Zombie rand_chump;

    rand_chump.name_ = name;
    rand_chump.announce();
}
