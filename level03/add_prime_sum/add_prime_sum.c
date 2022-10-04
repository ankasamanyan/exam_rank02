 #include <unistd.h>
 #include <stdio.h>

 int ft_atoi(char *str)
 {
	int number = 0;
	int sign = 1;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		number = number * 10 + (*str++ - '0');
	return(number * sign);
 }

 int ft_print_number(int number)
 {
	int i = 0;
	char *stringy = "0123456789";
	if (number < 0)
		number *= -1;
	if (number >= 10)
		i = ft_print_number(number / 10);
	return(i + write(1, &stringy[number % 10], 1));
 }

int ft_isprime(int number)
{
	int i = 3;
	if (number == 1)
		return 0;
	if (number % 2 == 0 && number > 2)
		return 0;
	while (i < number)
	{
		if (number % i == 0)
			return 0;
		i++;
	}
	return 1;
}

 int main(int argc, char **argv)
 {
    int number = 0;
	int i = 1;
	int sum = 0;
	if (argc != 2)
		return(write(1, "0\n", 2));
	number = ft_atoi(argv[1]);
	if (number < 0)
		return(write(1, "0\n", 2));
	while (i <= number)
	{
		if (ft_isprime(i))
			sum += i;
		i++;
	}
	ft_print_number(sum);
	write(1, "\n", 1);
	return 0;
 }