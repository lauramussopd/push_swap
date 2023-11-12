#include "push_swap.h"

t_stack  *new_node(int value, t_stack *list)
{
    t_stack *node = (t_stack *)malloc(sizeof(t_stack));

    node->value = value;
    node->index = -1;
    node->next = list;//me dice q quin apunta (al anterios)
}

t_stack   *init_stack_a(char **argv)
{
    t_stack *list;
    int i = 0;

    list = NULL;
    while (argv[i])
        i++;
    while (--i)
        list = new_node(ft_atol(argv[i]), list); //tengo la referencia al ultimo que ouse
    return (list);
}