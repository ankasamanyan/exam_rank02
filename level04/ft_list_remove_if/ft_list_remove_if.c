#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *temp = *begin_list;

	while (temp != NULL)
	{
		if((*cmp)(temp->data, data_ref) == 0)
		{
			//halp
		}
	}
}