#include "Zombie.hpp"

int main(void)
{
    int how_many_zombie;
    Zombie *zombie_horde;
    std::cin >> how_many_zombie;
    //err handling for cin.
    zombie_horde = zombieHorde(how_many_zombie, "John");
    for (int i=0;i<how_many_zombie;i++)
        zombie_horde[i].announce();
    delete[] zombie_horde;
    return (0);
}
