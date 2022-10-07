#include <unistd.h>

int print_nbr (int num)
{
    int i = 0;
    char *str = "0123456789";
    if (num >= 10)
        i = print_nbr(num / 10);
    return(i + write(1, &str[num % 10], 1));
}

int main (int argc, char **argv)
{
    if (argc == 1)
        return(write(1, "0\n", 2));
    (void)argv;
    print_nbr(argc - 1);
    return 0;
}
