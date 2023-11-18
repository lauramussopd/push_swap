#include "push_swap.h"

//ra : rotate a - shift up all elements of stack a by 1. 
//The first element becomes the last one.

void    rotate(t_list **lst)
{
    t_list *tmp;
    t_list  *new_last;

    if (!*lst || (*lst)->next == NULL)
        return ;
    new_last = *lst;
    tmp = (*lst)->next; //nuevo primero
    while ((*lst)->next != NULL)
    {
        *lst = (*lst)->next;
    }
    new_last->next = NULL;
    (*lst)->next = new_last;
    (*lst) = tmp;
}

void    rotate_a(t_list **a)
{
    rotate(a);
    write(1, "ra\n", 3);
}
void    rotate_b(t_list **b)
{
    rotate(b);
    write(1, "ra\n", 3);
}