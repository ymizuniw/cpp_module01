#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <print_utils.hpp>

class HumanA
{
    private:
        std::string name_;
        Weapon &weapon_;
    public:
        HumanA(std::string human_name, Weapon &weapon);
        void attack();
};

#endif
