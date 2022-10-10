#include <stdio.h>
#include <unistd.h>

char to_lower(char c)
{
	if (c >= 'A' && c <= 'F')
		c = c - ('A' - 'a');
	return (c);
}

int find_char(char *str, char c)
{
	int i = 0;

	while (str[i])
	{
		// printf("find char : %c ,%c\n", str[i], to_lower(str[i]));
		if (str[i] == c || str[i] == to_lower(c))
			return 1;
		i++;
	}
	if (str[i] == c)
		return 1;
	return 0;
}

int	ft_atoi_base(const char *str, int str_base)
{
	char *s = "0123456789abcdef";
	char halp[17];
	int number = 0;
	int sign = 1;
	int i = 0;
	int j = 0;

	while(i < str_base)
	{
		halp[i] = s[i];
		i++;
	}
	halp[i] = '\0';
	// printf("%s\n", halp);
	i = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ( str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F'))
	{
		// printf("%c\n%c\n", str[i], to_lower(str[i]));
		if (find_char(halp, str[i]) == 0)
		{
			// printf("I got here for some reason\n");
			return (number * sign);
		}
		j = 0;
		while (halp[j])
		{
			if((str[i] == halp[j] )|| (to_lower(str[i]) == halp[j]))
			{
				number = (number * str_base) + j;
				// break;
			}
			j++;
			// if (halp[j] == '\0')
			// 	return (number * sign);
		}
		i++;
	}
	return (number * sign);
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
//grabage