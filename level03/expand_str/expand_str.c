#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int first = 1;
	if (argc != 2)
		return(write(1, "\n", 1));
	while (argv[1][i])
	{
		while ((argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13)) && (argv[1][i] != '\0'))
			i++;
		if (first == 0 && argv[1][i] != '\0')
			write(1, "   ",3);
		first = 0;
		while((argv[1][i] != 32 && !(argv[1][i] >= 9 && argv[1][i] <= 13)) && (argv[1][i] != '\0'))
			write(1, &argv[1][i++], 1);
	}
	return(write(1, "\n", 1));
}