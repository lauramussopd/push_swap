#include "push_swap.h"

int main (int argc, char *argv[])
{
    t_list *a;
    t_list *b;

    a = NULL;
    b = NULL;
    if(argc == 1 || (argc == 2 && argv[1][0] == '\0')) // i have two input but hte first char of the input is zero
        return(1);
    ft_check_args(argc, argv);
    if(is_ordered(argc, argv))
    {
        return (1);
    }
    else 
    {
        a = init_stack_a(argv);
        b = malloc(sizeof(t_list));
        t_node *aux = a->first;
        while(aux != NULL)
        {
            ft_printf("value: %d\n", aux->value);
            aux = aux->next;
        }
        // swap_a(a);
        // aux = a->first; //reiniecializo el a
        // while(aux != NULL)
        // {
        //     ft_printf("value: %d\n", aux->value);
        //     aux = aux->next;
        // }
        rotate(a);
        aux = a->first; //reiniecializo el a
        while(aux != NULL)
        {
            ft_printf("ROTATE value: %d\n", aux->value);
            aux = aux->next;
        }


        // push_a(a, b);
        // aux = a->first;
        // while(aux != NULL)
        // {
        //     ft_printf("stack a value: %d\n", aux->value);
        //     aux = aux->next;
        // }
        // aux = b->first;
        // while(aux != NULL)
        // {
        //     ft_printf("stack b value: %d\n", aux->value);
        //     aux = aux->next;
        // }
    }
    return 0;
}
