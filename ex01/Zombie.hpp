#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
    private:
        std::string name_;
    public:
        void announce(void);
        Zombie *newZombie(std::string name);
        void naming(std::string name);
        void randomChump(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

void      print_msg(std::string msg);

#endif
