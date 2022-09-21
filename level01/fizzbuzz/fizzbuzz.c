#include "unistd.h"

int main(void)
{
	int		i;
	char	c;

	i = 1;
	while (i < 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 10);
		else if (i % 3 == 0)
			write(1, "fizz\n", 6);
		else if (i % 5 == 0)
			write(1, "buzz\n", 6);
		else if (i >= 1 && i<=9)
		{
			c = i + '0';
			write(1, &c, 1);
			write(1, "\n", 1);
		}
		else if (i != 100)
		{
			c = (i / 10) + '0';
			write(1, &c, 1);
			c = (i % 10) + '0';
			write(1, &c, 1);
			write(1, "\n", 1);
		}
		else
			write(1, "100\n", 5);
		i++;
	}
	
	return 0;
}
