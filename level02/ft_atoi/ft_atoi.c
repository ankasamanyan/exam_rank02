// #include "unistd.h"
//  #include <stdlib.h>
//  #include "stdio.h"

int	ft_atoi(const char *str)
{
	int number = 0;
	int sign = 1;
	int i = 0;

	if (str[0] == '-' || str[0] == '+')
		sign = -1;
	while (str[i] != '\0')
	{
		if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		else if ((str[i] >= '0' && str[i] <= '9') && (str[0] == '-' || str[0] == '+'))
			number = number * 10 + (str[i] - '0');
		else
			return(0);
		i++;
	}
	return (sign * number);
}

// int main( void )
// {
// 	// printf("%i", atoi("kjtdgf67"));
// 	const char *str = "+987654321234567890";
// 	printf("%i", ft_atoi(str));
// 	return 0;
// }
