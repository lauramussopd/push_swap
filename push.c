#include "push_swap.h"

//pa : push a - take the first element at the top of b and put it at the top of a. 
//Do nothing if b is empty.
/*
void push_stack(t_list **src, t_list **dest)
{
    t_list tmp;
    if (*dest == NULL)
        return ;
    temp = *src;
    *src = (*src)->next;


}
*/

void	push(t_list **src, t_list **dest)
{
	t_list	*tmp;

	if (*src == NULL)
		return ;
	tmp = (*src)->next; //cabeza
	(*src)->next = *dest;
	*dest = *src;
	*src = tmp;
}

void push_a(t_list **stack_a, t_list **stack_b)
{
    push(stack_b, stack_a);
    write(1, "pa\n", 3);
}

void    push_b(t_list **stack_a, t_list **stack_b)
{
    push(stack_a, stack_b);
    write(1, "pb\n", 3);
}