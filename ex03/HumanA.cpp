#include "HumanA.hpp"

HumanA::HumanA(std::string human_name, std::string weapon_name)
{
    name_=human_name;
    weapon_.setType(weapon_name);
    print_msg("HumanA is constructed with human_name and weapon_name.");
}

void HumanA::attack(void)
{
    std::cout << name_ << "attacks with " << weapon_.getType() << std::endl;
}
