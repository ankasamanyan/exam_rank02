#include "unistd.h"
// #include <string.h>
// #include "stdio.h"

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int j = 0;
	if (!s1 || !s2)
		return NULL;
	while (*s1)
	{
		j = 0;
		while (s2[j])
		{
			if (*s1 == s2[j])
				return ((char *)s1);
			j++;
		}
		s1++;
	}
	return NULL;
}

// int main(int argc, char const *argv[])
// {
// 	printf("%s\n", strpbrk("halp godddd","gdd"));
// 	printf("%s\n", ft_strpbrk("halp godddd","gdd"));
// 	return 0;
// }
