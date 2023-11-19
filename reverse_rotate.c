#include "push_swap.h"

//the last element become the first one

void    reverse_rotate(t_list **lst)
{
    t_list  *first;
    t_list  *last;

    if ((*lst) == NULL || (*lst)->next == NULL)
        return ;
    last = *lst; //cabeza
    while(last->next->next != NULL) //  Imposta last sulla testa della lista
    {
        last = last->next; //Muove last al penultimo nodo
    }    
    first = *lst; // // Salva il primo nodo
    *lst = last->next; // Imposta la testa della lista sul vecchio ultimo nodo
    last->next = NULL; // Imposta il nuovo ultimo nodo a NULL
    (*lst)->next = first; // Collega il nuovo ultimo nodo al primo nodo
}
void    rra(t_list **a)
{
    reverse_rotate(a);
    write(1, "rra\n", 4);
}

void    rrb(t_list **b)
{
    reverse_rotate(b);
    write(1, "rrb\n", 4);
}