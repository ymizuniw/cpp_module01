#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc!=2)
        return (1);
    if (argv[1][0]=='\0')
        return (1);
    Harl harl;
    harl.complain(argv[1]);
    return (0);
}
