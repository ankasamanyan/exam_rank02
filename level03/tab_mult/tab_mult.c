#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int number = 0;
	
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		number = number * 10 + (str[i++] - '0');
	return(number * sign);
}

void ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
}

void ft_putnbr (int num)
{
	char *str = "0123456789";
	if (num >= 10)
		ft_putnbr(num / 10);
	write(1, &str[num % 10], 1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return(write(1, "\n", 1));
	int i = 1;
	char *str = "0123456789";
	int num = ft_atoi(argv[1]);
	while (i <= 9)
	{
		write(1, &str[i] ,1);
		write(1, " x " ,3);
		ft_putstr(argv[1]);
		write(1, " = " ,3);
		ft_putnbr(num * i);
		write(1, "\n" ,1);
		i++;
	}
	return 0;
}