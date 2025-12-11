#include "HumanB.hpp"

static void print_human_status(std::string &name, Weapon *weapon)
{
    std::cout << "name: " << name << std::endl;
    if (weapon)
        std::cout << "weapon: " << weapon->getType() << std::endl;
    else
        std::cout << "weapon: no-weapon" << std::endl;
}

HumanB::HumanB(std::string human_name) : name_(human_name), weapon_(NULL)
{
    print_msg("HumanB constructor called.");
    print_human_status(name_, weapon_);
}

void HumanB::setWeapon(Weapon &weapon)
{
    weapon_ = &weapon;
}

static void attack_log(std::string name, Weapon *weapon)
{
    if (weapon)
        std::cout << name << " attacks with " << weapon->getType() << std::endl;
    else
        std::cout << name << " attacks with " << "no-weapon" << std::endl;
}

void HumanB::attack(void)
{
    attack_log(name_, weapon_);
}

std::string const &Weapon::getType() const
{
    return (type_);
}

void Weapon::setType(std::string type)
{
    type_ = type;
}
