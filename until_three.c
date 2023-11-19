#include "push_swap.h"

void two_num(t_list **lst)
{
    if ((*lst)->value > (*lst)->next->value)
    {
        swap(lst);
    }
    return ;
}

void	three_num(t_list **lst)
{
    if (((*lst)->value > (*lst)->next->value)
		&& ((*lst)->value < (*lst)->next->next->value))
		swap_a(lst);
	else if (((*lst)->value > ((*lst)->next->value))
		&& ((*lst)->next->value < (*lst)->next->next->value))
		rotate_a(lst);
	else if (((*lst)->value < (*lst)->next->value)
		&& ((*lst)->value < (*lst)->next->next->value))
	{
		rra(lst);
		swap_a(lst);
	}
	else if (((*lst)->value > (*lst)->next->value)
		&& (*lst)->next->value > (*lst)->next->next->value)
	{
		rotate_a(lst);
		swap_a(lst);
	}
	else if (((*lst)->value < (*lst)->next->value)
		&& (*lst)->value > (*lst)->next->next->value)
		rra(lst);
}
