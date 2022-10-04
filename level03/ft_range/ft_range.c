#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int *array;
	int len = 0;

	if (start > end)
		len = start - end;
	else 
		len = end - start;
	array = malloc(sizeof(int) * len + 1);
	if (!array)
		return (NULL);
	while (len >= 0)
	{
		array[len] = end;
		if (start > end)
			end++;
		else
			end--;
		len--;
	}
	return (array);
}