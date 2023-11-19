#include "push_swap.h"

void swap(t_list **lst)
{
    int	tmp;

	if ((*lst) == NULL || (*lst)->next == NULL)
		return ;
	tmp = (*lst)->value;
	(*lst)->value = (*lst)->next->value;
	(*lst)->next->value = tmp;
}

void swap_a(t_list **a)
{
    swap(a);
    write(1, "sa\n", 3);
}

void swap_b(t_list **b)
{
    swap(b);
    write(1, "sb\n", 3);
}
/*
temp = a
a = b
b = temp
*/
