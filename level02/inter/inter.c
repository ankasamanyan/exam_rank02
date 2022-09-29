#include <unistd.h>
#include <stdbool.h>

int     main (int argc, char **argv)
{
    int i = 0;
    int j = 0;
    bool arr[256];   
    if (argc != 3)
    {
        write(1, "\n", 1);
        return 0;
    }
    while (i <= 256)
        arr[i++] = false;
    i = 0;
    while (argv[1][i])
    {
        j = 0;
        while (argv[2][j])
        {
            if (argv[1][i] == argv[2][j] && arr[(int)argv[1][i]] == false)
            {
                write(1, &argv[1][i], 1);
                arr[(int)argv[1][i]] = true;
            }
            j++;
        }
        i++;
    }

}