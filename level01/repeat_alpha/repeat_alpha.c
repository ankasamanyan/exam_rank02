
#include "unistd.h"

int main(int argc, char const *argv[])
{
	int i;
	int j;
	int	temp;
	char *str = "abcdefghijklmnopqrstuvwxyz";
	char *str_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 0;
	j = 0;
	temp = 0;
if (argc == 2)
{
	while (argv[1][i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (argv[1][i] == str[j] || argv[1][i] == str_upper[j])
			{
				temp = j;
				while (temp-- >= 0)
					write(1, &argv[1][i], 1);
			}
			j++;
		}
		i++;
	}
}
	write(1, "\n", 1);
	return 0;
}
