#include "push_swap.h"

t_stack *create_node(t_stack *first_list, int num) 
//crea un nuovo nodo nella pisla e lo aggiunge alla lista
//first_list e' il puntatore alla testa della lista
{
    t_stack *node;
    t_stack *tmp; //utilizzato come puntatore temporaneo per attraversare la lista fino all'ultimo nodo

    node = malloc(sizeof(t_stack)); //create the empty box
    if(!node)
        return (NULL);
    node->value = num; //accedo a value di node e gli assegno num
    node->next = NULL;
    tmp = first_list;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = node;  //Assegna a tmp il valore di first_list,
    return (node);
}

t_stack   *init_stack_a(char *argv[]) //relaziono un nodo all'altro
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