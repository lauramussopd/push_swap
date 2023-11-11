#include "push_swap.h"

int main (int argc, char *argv[])
{
    t_stack *a;
    t_stack *b;

    a = NULL;
    b = NULL;
    if(argc == 1 || (argc == 2 && argv[1][0] == '\0')) // i have two input but hte first char of the input is zero
        return(1);
    else if (argc == 2)
            argv = ft_split(argv[1], ' '); //to implement split
    ft_check_args(argc, argv)

}

