#include "HumanB.hpp"

HumanB::HumanB(std::string human_name) : name_(human_name)
{
    print_msg("HumanB is constructed with only human_name.");
}

HumanB::HumanB(std::string human_name, Weapon *weapon_ptr) :name_(human_name), weapon_(weapon_ptr)
{
    print_msg("HumanB is constructed with human_name and weapon_name.");
}

void HumanB::attack(void)
{
    if (weapon_)
        std::cout << name_ << "attacks with " << weapon_->getType() << std::endl;
    else
        std::cout << name_ << " has no weapon" << std::endl;
}

std::string Weapon::getType() const{
    return (type_);
}

void Weapon::setType(std::string &type)
{
    type_=type;
}
