#include "HumanA.hpp"

static void print_human_status(std::string &name, Weapon &weapon)
{
    std::cout << "name: " << name << std::endl;
    std::cout << "weapon: " << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string human_name, Weapon &weapon_ref): name_(human_name), weapon_(weapon_ref)
{
    print_msg("HumanA's object created.");
    print_human_status(name_, weapon_);
}

HumanA &HumanA::operator=(HumanA &other)
{
    if (this!=&other)
    {
        name_=other.name_;
        weapon_=other.weapon_;
    }
    return *this;
}

static void attack_log(std::string name, Weapon &weapon)
{
    std::cout << name << "attacks with" << weapon.getType() << std::endl;
}

void HumanA::attack(void)
{
    attack_log(name_, weapon_);
}
