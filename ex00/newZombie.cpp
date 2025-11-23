#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *new_zombie = nullptr;
    try {
        new_zombie = new Zombie(name);
    } catch(const std::bad_alloc &e) {
        std::cerr << "memory allocation failed." << e.what() << std::endl;
        return (nullptr);
    }
    return (new_zombie);
}
