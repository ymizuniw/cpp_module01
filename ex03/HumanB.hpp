#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon weapon_;
        std::string name_;
    public:
        HumanB(std::string human_name);
        HumanB(std::string human_name, std::string weapon_name);
        ~HumanB();
        HumanB operator=(HumanB &other){
            if (this!=&other)
            {
                name_=other.name_;
                weapon_=other.weapon_;
            }
            return *this;
        }
        void attack();
};

#endif
