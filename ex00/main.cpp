#include "Zombie.hpp"

int main(void)
{
    Zombie obj1("static_zombie");
    Zombie *obj2;
    Zombie *obj3;

    obj2 = newZombie("dynamic_zombie");
    if (obj2==nullptr)
    {
        std::cerr << "memory allocation failed: " << std::endl;
        return (1);
    }
    obj3 = newZombie("");
    if (obj3==nullptr)
    {
        std::cerr << "memory allocation failed: " << std::endl;
        delete(obj2);
        return (1);
    }
    delete(obj2);
    delete(obj3);
    return (0);
}
