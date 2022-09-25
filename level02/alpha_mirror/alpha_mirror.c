#include "unistd.h"

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    if (argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    char *s1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *s2 = "zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA";
    while (argv[1][i])
    {
        if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
        {
            j = 0;
            while (s1[j] != '\0')
            {
                if (argv[1][i] == s1[j])
                    write(1, &s2[j], 1);
                j++;
            }
        }
        else 
            write(1, &argv[1][i], 1);
        i++;
    }
        write(1, "\n", 1);
    return 0;
}