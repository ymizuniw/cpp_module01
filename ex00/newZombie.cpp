#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *new_zombie;
    try {
        new_zombie = new Zombie(name);
    } catch(const std::bad_alloc &e) {
        std::cerr << "memory allocation failed." << e.what() << std::endl;
        return (NULL);
    }
    return (new_zombie);
}
