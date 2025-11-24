#include "HumanB.hpp"

static void print_human_status(std::string &name, Weapon *weapon)
{
    std::cout << "name: " << name << std::endl;
    if (weapon)
        std::cout << "weapon: " << weapon->getType() << std::endl;
    else
        std::cout << "weapon: no-weapon" << std::endl;
}

HumanB::HumanB(std::string human_name) : name_(human_name)
{
    print_human_status(name_, weapon_);
}

HumanB::HumanB(std::string human_name, Weapon *weapon_ptr) :name_(human_name), weapon_(weapon_ptr)
{
    print_humanB_status(name_, weapon_);
}

HumanB &HumanB::operator=(const HumanB &other)
{
    if (this!=&other)
    {
        name_=other.name_;
        weapon_=other.weapon_;
    }
    return *this;
}

static void attack_log(std::string name, Weapon *weapon)
{
    if (weapon)
        std::cout << name << "attacks with" << weapon->getType() << std::endl;
    else
        std::cout << name << "attacks with" << "no-weapon" << std::endl;
}

void HumanB::attack(void)
{
    attack_log(name_, weapon_);
}

std::string Weapon::getType() const{
    return (type_);
}

void Weapon::setType(std::string &type)
{
    type_=type;
}
