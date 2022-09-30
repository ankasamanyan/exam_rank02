#include <unistd.h>
#include <stdbool.h>

int main (int argc, char **argv)
{
	int i = 0;
	bool arr[256];
	if (argc != 3)
		return (write (1, "\n", 1));
	while (i < 256)
		arr[i++] = false;
	i = 0;
	while (argv[1][i])
	{
		if (arr[(int)argv[1][i]] == false)
		{
			write(1, &argv[1][i], 1);
			arr[(int)argv[1][i]] = true;
		}
		i++;
	}
	i = 0;
	while (argv[2][i])
	{
		if (arr[(int)argv[2][i]] == false)
		{
			write(1, &argv[2][i],1);
			arr[(int)argv[2][i]] = true;
		}
		i++;
	}
	return (write (1, "\n", 1));
}
