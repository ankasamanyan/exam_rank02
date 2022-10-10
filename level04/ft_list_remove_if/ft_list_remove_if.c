#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *curr = *begin_list;
	t_list *prev = 0;

	while (curr != NULL)
	{
		if((*cmp)(curr->data, data_ref) == 0)
		{
			if (prev == 0)
				*begin_list = curr->next;
			else 
				prev->next = curr->next;
			free(curr);
		}
		prev = curr;
		curr = curr->next;
	}
}


// .................

#include "ft_list.h"

#include <stdlib.h>



/*///////////////////////////////////////////////////////
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/
#include "ft_list.h"
#include <stdlib.h>

void		ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*current;
	t_list		*previous;

	previous = 0;
	current = *begin_list;
	while (current)
	{
		if ((cmp)(current->data, data_ref) == 0)
		{
			if (previous == 0)
				*begin_list = current->next;
			else
				previous->next = current->next;
			free(current);
		}
		previous = current;
		current = current->next;
	}
}


