
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int *array;
	int len = 0;
	if (start > end)
		len = start - end;
	else 
		len = end - start;
	array = malloc(sizeof(int) * len + 1);
	if (!array)
		return NULL;
	while (len >= 0)
	{
		array[len] = start;
		if (start > end)
			start++;
		else
			start--;
		len--;
	}
	return (array);
}
