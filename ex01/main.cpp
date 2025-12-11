#include "Zombie.hpp"

int main(void)
{
    int how_many_zombie;
    std::string zombie_name;
    Zombie *zombie_horde;

    while (1)
    {
        std::cout << "enter how many zombie to generate." << std::endl;
        if (!(std::cin >> how_many_zombie))
        {
            std::cerr << "invalid input." << std::endl;
            return (1);
        }
        else
        {
            if (how_many_zombie < 0 || how_many_zombie > 1000)
            {
                std::cerr << "1-1000 is allowed for safe." << std::endl;
                return (1);
            }
            break;
        }
    }
    std::cout << "enter zombie's name." << std::endl;
    if (!(std::cin >> zombie_name))
    {
        std::cerr << "invalid input." << std::endl;
        std::cin.clear();
        return (1);
    }
    zombie_horde = zombieHorde(how_many_zombie, zombie_name);
    if (zombie_horde == NULL)
        return (1);
    for (int i = 0; i < how_many_zombie; i++)
        zombie_horde[i].announce();
    delete[] zombie_horde;
    return (0);
}
