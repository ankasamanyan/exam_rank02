#include <unistd.h>
// #include <stdio.h>

int main(int argc, char **argv)
{
    int end = 0;
    int start = 0;
    int len = 0;
    if (argc != 2)
        return (write(1, "\n" ,1));
    while (argv[1][len])
        len++;
    len = len - 1;
    while(argv[1][len] && (argv[1][len] == 32 || (argv[1][len] >= 9 && argv[1][len] <= 13)))
        len--;
    end = len;
    while (argv[1][len] && (argv[1][len] != 32 && !(argv[1][len] >= 9 && argv[1][len] <=13)))
        len--;
    start = len + 1;
    while( start <= end)
        write(1, &argv[1][start++], 1);
    write(1, "\n", 1);
    return 0;
}