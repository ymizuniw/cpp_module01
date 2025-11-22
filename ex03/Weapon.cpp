#include "Weapon.hpp"

void print_weapon_constructed(std::string weapon_name)
{
    std::cout << weapon_name << " is constructed." << std::endl;
}

void print_weapon_destructed(std::string weapon_name)
{
    std::cout << weapon_name << " is destructed." << std::endl;
}

Weapon::Weapon(void)
{
    type_="";
    print_weapon_constructed("no weapon");
}

Weapon::Weapon(std::string weapon_name)
{
    type_=weapon_name;
    print_weapon_constructed(weapon_name);
}

Weapon::~Weapon()
{
    print_weapon_destructed(type_);
}
