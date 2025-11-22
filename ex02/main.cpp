// Write a program that contains:

// const std::string str("hoge");
// std::string& x = const_cast<std::string&>(str);

// • A string variable initialized to "HI THIS IS BRAIN".
// • stringPTR: a pointer to the string.
// • stringREF: a reference to the string.

// Your program must print:
// • The memory address of the string variable.
// • The memory address held by stringPTR.
// • The memory address held by stringREF.

// And then:
// • The value of the string variable.
// • The value pointed to by stringPTR.
// • The value pointed to by stringREF.

// That’s all—no tricks. The goal of this exercise is to demystify references, which may
// seem completely new. Although there are some small differences, this is simply another
// syntax for something you already do: address manipulation.

#include <iostream>
#include <iomanip>

void print_str(std::string str)
{
    std::cout << str << std::endl;
}

void print_str_ptr(const std::string *str)
{
    std::cout << str <<std::endl;
}

void print_str_ref(const std::string &str)
{
    std::cout << &str << std::endl;
}

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    print_str(str);
    print_str_ptr(stringPTR);
    print_str_ref(stringREF);
    return(0);
}
