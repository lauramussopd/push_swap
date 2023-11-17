#include "push_swap.h"

/*--------------RETURNS THE LAST ELEMENT OF A LIST-----------------*/

t_list	*last(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*Adds *node to the end of list **lst. Returns a pointer to the first node.*/

void add_last(t_list **lst, t_list *node)
{
    t_list *aux;
    if (*lst)
    {
        aux = last(*lst);
        aux->next = node;   
    }
    else
    {
        *lst = node;
    }
}