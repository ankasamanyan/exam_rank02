#include "unistd.h"

int main(int argc, char const *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 32 || argv[1][i] == 9)
				i++;
			else
				break;
		}
		while ((argv[1][i] != '\0') && (argv[1][i] != 32 && argv[1][i] != 9))
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n" ,1);
	return 0;
}
