// #include "unistd.h"
// #include "stdio.h"

char    *ft_strrev(char *str)
{
	int i = 0;
	int len = 0;
	int swap = 0;
	while (str[len] != '\0')
		len++;
	len = len - 1;
	while (len > i && str[i] != 0)
	{
		swap = str[i];
		str[i] = str[len];
		str[len] = swap;
		len--;
		i++;
	}
	return (str);
}


// int	main(void)
// {
// 	char s[] = "Hiello World";
// 	// ft_strrev(s);
// 	printf("%s\n", ft_strrev(s));
// 	return (0);
// }





















// char    *ft_strrev(char *str)
// int main ()
// {
// 	char *stringy = "Halp";
// 	int	i;
// 	int	len;
// 	int	swap;

// 	i = 0;
// 	swap = 0;
// 	len = 0;
// 	while(stringy[len])
// 		len++;
// 	len = len - 1;
// 	// printf("%i\n", len);

// 	// printf("%c\n", stringy[i]);
// 	// printf("%c\n", stringy[len]);
// 	swap = stringy[i];
// 	printf("%c\n", swap);
// 	stringy[i++] = stringy[len];
// 	printf("%c\n", stringy[i]);
// 	stringy[len] = swap;

// 	// while (len > i && stringy[i] != '\0')
// 	// {
// 	// 	swap = stringy[i];
// 	// 	stringy[i] = stringy[len];
// 	// 	stringy[len] = swap;
// 	// 	len--;
// 	// 	i++;
// 	// 	printf("%s\n", stringy);
// 	// }
// 	// return(str);
// 	return(0);
// }

// // int main(void)
// // {
// // 	printf("%s\n", ft_strrev("Halp"));
// // 	return 0;
// // }
