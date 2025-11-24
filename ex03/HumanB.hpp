#ifndef HUMANB_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name_;
        Weapon *weapon_;
    public:
        HumanB(std::string human_name);
        HumanB(std::string human_name, Weapon *weapon_name);
        ~HumanB();
        HumanB &operator=(const HumanB &other);
        void attack();
};

#endif
