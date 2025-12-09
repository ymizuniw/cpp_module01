#include "Zombie.hpp"

int main(void)
{
    Zombie obj1("static_zombie");
    Zombie *obj2;
    Zombie *obj3;

    obj2 = newZombie("dynamic_zombie");
    if (obj2==NULL)
        return (1);
    obj3 = newZombie("");
    if (obj3==NULL)
    {
        delete(obj2);
        return (1);
    }
    obj1.announce();
    obj2->announce();
    obj3->announce();
    delete(obj2);
    delete(obj3);
    return (0);
}
