#include "push_swap.h"

t_stack *create_node(t_stack *first_list, int num)
{
    t_stack *node;
    t_stack *tmp;

    node = malloc(sizeof(t_stack)); //create the empty box
    if(!node)
        return (NULL);
    node->value = num; //accedo a value di node e gli assegno num
    node->next = NULL;
    tmp = first_list;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = node;
    return (node);
}

t_stack   *init_stack_a(char *argv[])
{
    int i = 2;
    t_stack *first_list; //non deve cambiare quando creo la lista

    first_list = malloc(sizeof(t_stack));
    if(!first_list)
        return (NULL);
    first_list->value = ft_atol(argv[1]);
    first_list->next = NULL;
    while(argv[i])
    {
        if (!create_node(first_list, ft_atol(argv[i])))
            return (NULL);
        i++;
    }
    return (first_list);
}