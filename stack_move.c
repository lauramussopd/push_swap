#include "push_swap.h"

// swap - swap the tp 2 nodes in the stack
//rotate top node in the stack goea to bottom
// push - fot this command i need another stack


int    stack_size(t_list *stack)  
{
    int i = 0;
    t_node *aux = stack->first; //garda en el aux el primer nodo del la lista
    while(aux !=  NULL)
    {
        i++;
        aux = aux->next;
    }
    return(i);
}


void    swap(t_list *stack)
{
    t_node *node1;
    t_node *node2; //declaramos las dos variables aux

    if (stack_size(stack) > 1)
        {
        node1 = stack->first;
        node2 = node1->next; //inicializamos las dos variables aux

        node1->next = node2->next; // los dos apuntan al tercero
        node2->next = node1; //node 2 apunta al primero 
        stack->first = node2; //reassigno la cabeza
        }
}

void    swap_a(t_list *stack)
{
    swap(stack);
    write(1, "sa\n", 3);
}

void    swap_b(t_list *stack)
{
    swap(stack);
    write(1, "sb\n", 3);
}

void    swap_both(t_list *stack_a, t_list *stack_b)
{
    swap(stack_a);
    swap(stack_b);
    write(1, "ss\n", 3);
}
/*
void    rotate(t_list *stack)
{

}

rotate

reverse rotate


**/
void    push(t_list *stack_a, t_list *stack_b)
{
    t_node *node1;
    t_node *node2;

    if (stack_size(stack_a) > 0)
    {
    node1 = stack_a->first; //pongo en nodo la direccon de la cabeza original
    stack_a->first =  node1->next;

    node2  = stack_b->first;
    stack_b->first = node1;
    node1->next = node2;
    }
}

void    push_b(t_list *stack_a, t_list *stack_b)
{
    push(stack_a, stack_b);
    write(1, "pb\n", 3);
}
void    push_a(t_list *stack_a, t_list *stack_b)
{
    push(stack_b, stack_a);
    write(1, "pa\n", 3);
}

void    rotate(t_list *stack)
{
    t_node *node1;
    t_node *aux; //declaramos las dos variables aux

    if (stack_size(stack) > 1)
        {
        node1 = stack->first;
        stack->first = node1->next;  //assigno a la cabeza la posicion del segudo elemento 
        aux = node1->next;
        while (aux->next) // mientras haya un proximo, me voy a guardar en aux el proximo
        {
            aux=aux->next;
        }
        aux->next = node1;
        node1->next = NULL; //mi ultimo nodo del la lista es nodo1


        }
}