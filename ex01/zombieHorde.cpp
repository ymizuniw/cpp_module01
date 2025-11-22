#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombie_horde;
    zombie_horde = new Zombie[N]; 
 
    for (int idx=0;idx<N;idx++)
        zombie_horde[idx].naming(name);
    return (zombie_horde);
}
