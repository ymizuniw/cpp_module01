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
        ~Weapon();
        Weapon operator=(Weapon &other){
            type_=other.type_;
            return *this;
        }
        std::string &getType(void) const;
        void setType(std::string &type);
};

void print_msg(std::string str);

#endif