#include "push_swap.h"

void    swap(t_list *stack)
{
    t_node *node1;
    t_node *node2; //declaramos las dos variables aux

    node1 = stack->first;
    node2 = node1->next; //inicializamos las dos variables aux

    node1->next = node2->next; // los dos apuntan al tercero
    node2->next = node1; //node 2 apunta al primero 
    stack->first = node2; //reassigno la cabeza

}