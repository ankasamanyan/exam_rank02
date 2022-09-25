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
    while(argv[1][i])
    {
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            j = argv[1][i] + 1;
            if (j > 'z')
                j = j - 26;
            write(1, &j, 1);
        }
        else if  (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            j = argv[1][i] + 1;
            if (j > 'Z')
                j = j - 26;
            write(1, &j, 1);
        }
        else
           write(1, &argv[1][i], 1);
        i++;
    }
        write(1, "\n", 1);
    return 0;
}

