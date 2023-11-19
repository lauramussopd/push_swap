#include "push_swap.h"

void	cleaner(t_list **lst)
{
	t_list	*aux;

	aux = (*lst);
	while (aux)
	{
		(*lst) = aux->next;
		free(aux);
		aux = (*lst);
	}
	(*lst) = NULL;
}

void	ft_error(t_list **lst)
{
	write(2, "Error\n", 6);
	cleaner(lst);
	exit (EXIT_FAILURE);
}



int	find_min(t_list *lst)
{
	int position;
	int i = 0;
	int min = (lst->value);

	position = 0;

	while(lst != NULL)
	{
		if (lst->value < min)
		{
			min = lst->value;
			position = i;
		}
		lst = lst->next;
		i++;
	}
	return(position);
}

void	rotate_min(t_list **lst, int size)
{
	int i = 0;

	while((*lst)->value != 0)
	{
		rotate(lst);
		i++;
		if (i > (size / 2))
		{
			rra(lst);
			write(1, "rra\n", 4);
		}
		else
		{
			rotate_a(lst);
		}
	}
}


