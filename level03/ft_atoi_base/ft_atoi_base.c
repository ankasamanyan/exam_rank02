#include <unistd.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int j = 0;
	int anotha_one = 1;
	int sign = 1;
	int number = 0;
	char *base_str = "0123456789abcdef";

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	//either you check here what is the last character (so you only work until there)
	//or you check in after while base str[j] if its the same as in iteration before then you return
	while(str[i]) //check the characters 
	{
		j = 0;
		// subfunction();
		while (base_str[j] && j <= str_base)
		{
			if(str[i] == base_str[j])
				number = (number * str_base) + j;

			j++;
		}
		anotha_one *= str_base;
		i++;
	}
	return(number * sign);
}
 //halp, idk  what does this wanttttt
#include <stdio.h>
int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		return 0;
	}
	
	printf("%i\n", ft_atoi_base(argv[1], 16));
	return 0;
}
