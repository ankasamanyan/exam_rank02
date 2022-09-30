#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char c;
	if (argc != 2)
		return (write(1, "\n", 1));
	while (argv[1][i])
	{
		if (argv[1][i] == '_')
		{
			i++;
			c = argv[1][i] - 32;
			write(1, &c, 1);
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	return (write(1, "\n", 1));
}