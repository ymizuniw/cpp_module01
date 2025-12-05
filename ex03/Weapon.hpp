#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iomanip>

// Implement a Weapon class that has:
// • A private attribute type, which is a string.
// • A getType() member function that returns a constant reference to type.
// • A setType() member function that sets type using the new value passed as a parameter.

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
