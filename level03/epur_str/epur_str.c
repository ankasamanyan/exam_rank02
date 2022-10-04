#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	int first = 0;
	if(argc != 2)
		return(write(1, "\n", 1));
	while(argv[1][i] != '\0')
	{
		while ((argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13)) && (argv[1][i] != '\0'))
			i++;
		if (first == 1 && (argv[1][i] != '\0')) 
			write(1, " ", 1);
		first = 1;
		while (argv[1][i] != 32 && !(argv[1][i] >= 9 && argv[1][i] <= 13) && (argv[1][i] != '\0'))
			write(1, &argv[1][i++], 1);
	}
	return(write(1, "\n", 1));
}
