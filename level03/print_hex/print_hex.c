#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int number = 0;
	int sign = 1;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		number = number * 10 + (str[i++] - '0');
	return (number * sign);
}

void print_hex(int num)
{
	char *stringy = "0123456789abcdef";
	if (num >= 16)
		print_hex(num / 16);
	write(1, &stringy[num % 16], 1);
}

int main(int argc, char **argv)
{
	if ( argc != 2)
		return(write(1, "\n", 1));
	int nummer = ft_atoi(argv[1]);
	print_hex(nummer);
	return(write(1, "\n", 1));
}
