#include <unistd.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	i = 0;
	if (argc != 3)
		return(write(1, "\n", 1));
	while (argv[1][i] && argv[2][j])
	{
		if (argv[1][i] == argv[2][j])
			i++;
		j++;
	}
	if (argv[1][i] == '\0')
		return (write(1, "1\n", 2));
	else
		return (write(1, "0\n", 2));
}