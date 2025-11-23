#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
    private:
        std::string name_;
    public:
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
};

void        print_msg(std::string msg);
Zombie      *newZombie(std::string name);
void        randomChump(std::string name);

#endif
