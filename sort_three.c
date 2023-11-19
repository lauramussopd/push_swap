#include "push_swap.h"

void two_num(t_list **lst)
{
    if ((*lst)->value > (*lst)->next->value)
    {
        swap(lst);
    }
    return ;
}

void	sort_three(t_list **lst)
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

void sort_four(t_list **stack_a, t_list **stack_b)
{
	rotate_min(stack_a);
	push_b(stack_a, stack_b);
	sort_three (stack_a);
	push_b(stack_a, stack_b);
}