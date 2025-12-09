#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <print_utils.hpp>

class HumanB
{
    private:
        std::string name_;
        Weapon *weapon_;
    public:
                HumanB(std::string human_name);
        void    setWeapon(Weapon &weapon);
        void    attack();
};

#endif
