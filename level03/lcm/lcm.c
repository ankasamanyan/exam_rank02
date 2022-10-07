#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int i = 1;
    if(a == 0 || b == 0)
        return 0;
    while (1)
    {
        if ((a * i) % b == 0)
            return(a * i);
        i++;
    }
    return 0;
}

// int main(int argc, char const *argv[])
// {
//     (void) argc;
//     (void) argv;
//     printf("%i\n" ,lcm(2, 4));
//     return 0;
// }
