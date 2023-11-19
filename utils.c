#include "push_swap.h"

/*void	ft_error(t_list **lst)
{
	write(2, "Error\n", 6);
	//cleaner(lst);
	exit (EXIT_FAILURE);
}*/





int		stack_size(t_list *lst)
{
	int i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return(i);
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

void	rotate_min(t_list **lst)
{
	int position;
	int size;
	int i = 0;


	position = find_min(*lst);
	size = stack_size(*lst);

	if (position >= (size / 2) ) // position mas grande que la mitad
	{
		i = size-position;
		while(i > 0)
		{
			rra(lst);
			i--;
		}
		
	}
	else 
	{	
		while (position > i)
		{
			rotate_a(lst);
			i++;
		}
		
	}
	
}


void print_lst (t_list *lst, char *str)
{
		while (lst != NULL)
		{
			
			printf("%s = %d\n",str, lst->value);
			lst = lst->next;
		}
}