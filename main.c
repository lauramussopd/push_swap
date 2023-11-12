#include "push_swap.h"

int main (int argc, char *argv[])
{
    t_stack *a;
    t_stack *b;

    a = NULL;
    b = NULL;
    if(argc == 1 || (argc == 2 && argv[1][0] == '\0')) // i have two input but hte first char of the input is zero
        return(1);
    ft_check_args(argc, argv);
    is_ordered(argc, argv);
    a = init_stack_a(argv);
    t_stack *aux = a;
    while(aux != NULL)
    {
        ft_printf("value: %d\n", aux->value);
        aux = aux->next;
    }
    return 0;
}
