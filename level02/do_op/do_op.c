#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"

int main( int argc, char **argv)
{
    int i = 0;
    if (argc != 4)
    {
        write(1, "\n",1);
        return 0;
    }
}