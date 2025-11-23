#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
    private:
        std::string name_;
    public:
        Zombie(void);
        ~Zombie(void);
        void announce(void);
        Zombie *newZombie(std::string name);
        void randomChump(std::string name);
};

void        print_msg(std::string msg);

#endif
