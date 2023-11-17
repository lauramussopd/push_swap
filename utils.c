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

