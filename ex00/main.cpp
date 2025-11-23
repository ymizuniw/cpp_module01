#include "Zombie.hpp"

int main(void)
{
    Zombie obj1("static_zombie");
    Zombie *obj2;
    try{
        obj2 = new Zombie("dynamic_zombie");
    } catch(const std::bad_alloc &e){
        std::cerr << "memory allocation failed: " << e.what() << std::endl;
        return (1);
    }
    Zombie *obj3;
    obj3 = new(0) Zombie("noexception");
    if (obj3 == nullptr){
        std::cerr << "memory allocation failed." << std::endl;
        delete(obj2);
        return (1);
    }
    delete(obj2);
    return (0);
}
