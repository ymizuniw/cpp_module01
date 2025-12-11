#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iomanip>
#include <iostream>

class Zombie {
private:
  std::string name_;

public:
  Zombie();
  ~Zombie(void);
  void set_name(std::string name);
  void announce(void);
};

void print_msg(std::string msg);
Zombie *newZombie(std::string name);
void randomChump(std::string name);
Zombie *zombieHorde(int N, std::string name);

#endif
