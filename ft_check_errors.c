#include "push_swap.h"

//check input: not duplicate
//check if the nu is dgit
//check intsize
//check if is alrealdy sorted


int	ft_duplicate(t_stack_node *a, int n) //Define a function that checks for duplicate input numbers in stack `a`
{
	if (!a) //Check for an empty stack
		return (0);
	while (a) //Loop until the end of stack `a` is reached
	{
		if (a->value == n) //Check if the current node's value is equal to `n`. 
			return (1);
		a = a->next; //Move to the next node to check for duplicates
	}
	return (0);
}

int ft_isnumber_isdigit(char *str)
{

}

void ft_check_args(int argc, char **argv)
{
    ft_duplicate()
    ft_isnumber_isdigit()
}
int main(int argc, char **argv)
{
    ft_check_args(argc, argv)
}
