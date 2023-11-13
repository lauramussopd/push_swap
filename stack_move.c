#include "push_swap.h"

// swap - swap the tp 2 nodes in the stack
//rotate top node in the stack goea to bottom
// push - fot this command i need another stack

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
void    swap_a(t_list *stack)
{
    swap(stack_a);
    write(1, "sa\n", 3);
}

void    swap_b(t_list *stack)
{
    swap(stack_b);
    write(1, "sb\n", 3);
}

void    swap_both(t_list *stack, t_list *stack)
{
    swap(stack_a);
    swap(stack_b);
    write(1, "ss\n", 3);
}

void    rotate(t_list *stack)
{

}

rotate

reverse rotate


