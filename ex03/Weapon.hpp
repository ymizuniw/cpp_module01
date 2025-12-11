#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon
{
private:
    std::string type_;

public:
    Weapon();
    Weapon(std::string weapon_name);
    std::string const &getType(void) const;
    void setType(std::string type);
};

#endif
