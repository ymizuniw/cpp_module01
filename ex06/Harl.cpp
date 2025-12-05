#include "Harl.hpp"

void Harl::debug(void)
{
    std::cerr << "[DEBUG]: debug() is called." << std::endl;
}

void Harl::info(void)
{
    std::cerr << "[INFO]: info() is called." << std::endl;
}

void Harl::warning(void)
{
    std::cerr << "[WARNIGN]: warning() is called." << std::endl;
}

void Harl::error(void)
{
    std::cerr << "[ERROR]: error() is called." << std::endl;
}

typedef void (Harl::*t_message)(void);

void Harl::complain(std::string level)
{
    static const std::string levels[4] ={
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    t_message message_table[4] = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    int n = 0;
    while (n<4 && level.compare(levels[n]))
        n++;
    switch (n){
        case 0: (this->*message_table[0])();
        case 1: (this->*message_table[1])();
        case 2: (this->*message_table[2])();
        case 3: (this->*message_table[3])(); 
            break;
        default: return;
    }
}

// class Calculator{
//     private:
//         static double add(double a, double b){return a+b;}
//         static double subtract(double a, double b){return a-b;};
//         static double multiply(double a, double b){return b!=0 ? a/b:0;}
//         static double devide(double a, double b){return b!=0 ? a/b:0;}
//         using Operation = double (*)(double, double);
//         static Operation operations[4];
//     public:
//         static double calculate(char op, double a, double b){
//             switch(op){
//                 case '+': return operations[0](a, b);
//                 case '-': return operations[1](a, b);
//                 case '*': return operations[2](a, b);
//                 case '/': return operations[3](a, b);
//                 default: return (0);
//             }
//         }
// };

// Calculator::Operation Calculator::operations[] = {add, subtract, multiply, devide};

// class EventHandler{
//     public:
//         using Callback = void (*) (const std::string &, void *);
//         void registerCallback(Callback cb, void *userData){
//             callback = cb;
//             this->userData = userData;
//         }
//         void triggerEvent(const std::string &event){
//             if (callback){
//                 callback(event, userData);
//             }
//         }
//     private:
//         Callback callback = nullptr;
//         void *userData = nullptr;
// };

// void handleEvent(const std::string &event, void *userData){
//     std::cout << "Event received: " << event << std::endl;
// }

// int main(void){
//     EventHandler handler;
//     handler.registerCallback(handleEvent, nullptr);
//     handler.triggerEvent("Button clicked");
//     return (1);
// }
