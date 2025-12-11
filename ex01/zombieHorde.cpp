#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zombie_horde;

    if (N < 0)
    {
        std::cerr << "N should positive value." << std::endl;
        return (NULL);
    }
    try
    {
        zombie_horde = new Zombie[N];
    }
    catch (std::bad_alloc &e)
    {
        std::cerr << "Memory allocation failed." << std::endl;
        return (NULL);
    }
    for (int idx = 0; idx < N; idx++)
        zombie_horde[idx].set_name(name);
    return (zombie_horde);
}
