#include "unistd.h"
// #include "stdio.h"
//  #include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
				ret++;
			j++;
		}
		i++;
		if (ret != i)
			break;
	}
	return ret;
}

// int main()
// {
// 	printf("%zu\n", strspn("Halp Godd", "alpH"));
// 	printf("%zu\n", ft_strspn("Halp Godd", "alpH"));
// 	return 0;
// }
