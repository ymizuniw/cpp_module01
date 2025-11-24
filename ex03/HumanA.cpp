#include "HumanA.hpp"

HumanA::HumanA(std::string human_name, Weapon &weapon_ref): name_(human_name), weapon_(weapon_ref)
{
    print_msg("HumanA is constructed with human_name and weapon_name.");
}

void HumanA::attack(void)
{
    std::cout << name_ << "attacks with " << weapon_.getType() << std::endl;
}
