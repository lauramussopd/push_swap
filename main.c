#include "push_swap.h"

int main (int argc, char *argv[])
{
  /*  t_stack *a;
    t_stack *b;

    a = NULL;
    b = NULL;*/
    if(argc == 1 || (argc == 2 && argv[1][0] == '\0')) // i have two input but hte first char of the input is zero
        return(1);
    ft_check_args(argc, argv);
    is_ordered(argc, argv);
  //  init_stack_a(&a, argv + 1);
    return 0;

}

/*
int main(int argc, char *argv[]) //is gonna be ft_check_args
{
    if (ft_check_duplicates(argc, argv)) 
    {
        ft_print_error();
        printf("duplicated.\n");
    } 
    else if (is_number_and_int(argv))
    {
        ft_print_error();
        printf("not int.\n");
    }
    else {
        printf("input args, correct! no duplicates, no letters\n");
    }
    return 0;
}
*/