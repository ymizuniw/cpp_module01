#include <iostream>

void print_str(std::string str) { std::cout << str << std::endl; }

void print_str_addr(const std::string *str) { std::cout << str << std::endl; }

void print_str_ptr(const std::string *str) { std::cout << str << std::endl; }

void print_str_ref(const std::string &str) { std::cout << &str << std::endl; }

int main(void) {
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  print_str(str);
  std::cout << "addr:";
  print_str_addr(&str);
  std::cout << "ptr :";
  print_str_ptr(stringPTR);
  std::cout << "ref :";
  print_str_ref(stringREF);
  return (0);
}
