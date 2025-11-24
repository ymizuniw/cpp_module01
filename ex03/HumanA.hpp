#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
//use reference when non-null guarantee is needed, and when it does not need to be replaced.
//HumanA will have weapon necessarily, then it shoul be reference member.

class HumanA
{
    private:
        std::string name_;
        Weapon &weapon_;
    public:
        HumanA(std::string human_name, Weapon &weapon);
        ~HumanA();
        HumanA operator=(HumanA &other){
            if (this!=&other)
            {
                name_=other.name_;
                weapon_=other.weapon_;
            }
            return *this;
        }
        void attack();
};

#endif
