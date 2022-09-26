#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"

int main( int argc, char **argv)
{
	int res = 0;
    if (argc != 4)
    {
        write(1, "\n",1);
        return 0;
    }
	if (argv[2][0] == '*')
	{
		res = atoi(argv[1]) * atoi(argv[3]);
		printf("%i", res);
	}
	else if (argv[2][0] == '/')
	{
		res = atoi(argv[1]) / atoi(argv[3]);
		printf("%i", res);
	}
	else if (argv[2][0] == '+')
	{
		res = atoi(argv[1]) + atoi(argv[3]);
		printf("%i", res);
	}
	else if (argv[2][0] == '-')
	{
		res = atoi(argv[1]) - atoi(argv[3]);
		printf("%i", res);
	}
	return 0;
}