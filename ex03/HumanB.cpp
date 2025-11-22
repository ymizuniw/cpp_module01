#include "HumanB.hpp"

HumanB::HumanB(std::string human_name)
{
    this->name_=human_name;
    print_msg("HumanB is constructed with only human_name.");
}

HumanB::HumanB(std::string human_name, std::string weapon_name)
{
    name_=human_name;
    weapon_.setType(weapon_name);
    print_msg("HumanB is constructed with human_name and weapon_name.");
}

void HumanB::attack(void)
{
    std::cout << name_ << "attacks with " << weapon_.getType() << std::endl;
}

