#include <stdio.h>
#include <unistd.h>

char to_lower(char c)
{
	char lower;

	lower = c - 32;
	return (lower);
}



int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int j = 0;
	int sign = 1;
	int number = 0;
	char *base_str = "0123456789abcdef";

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	
	while((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F'))
	{
		
		i++;
	}
	return(number * sign);
}

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		return 0;
	}
	
	printf("%i\n", ft_atoi_base(argv[1], 10));
	return 0;
}
