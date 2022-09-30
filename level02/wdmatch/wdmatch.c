#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	if (argc != 3)
		return (write(1, "\n", 1));
	while (argv[2][j])
	{
		if (argv[2][j++] == argv[1][i])
			i++;
	}
	j = 0;
	while (argv[1][i] == '\0' && argv[1][j])
		write(1, &argv[1][j++], 1);
	return (write(1, "\n", 1));
}
