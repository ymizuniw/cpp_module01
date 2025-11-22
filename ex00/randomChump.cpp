#include "Zombie.hpp"

void Zombie::randomChump(std::string name)
{
    Zombie rand_chump;

    rand_chump.name_ = name;
    rand_chump.announce();
    // Zombie *rand_chum = Zombie::newZombie(name);
    // rand_chum.announce();
    //ptr scope end.
}
