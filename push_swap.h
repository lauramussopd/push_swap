#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdbool.h>
#include <limits.h>
#include "./printf/ft_printf.h"


typedef struct s_stack
{
	int		value; //dato
	struct s_stack *next;
} t_stack;

/*
typedef struct s_list
{
	t_stack	*first;
} t_list;
*/

/*UTILS*/

long	ft_atol(const char *str);
int	ft_isdigit(int a);
void	ft_print_error();
int ft_strlen(char *str);
int	ft_strcmp(char *s1, char *s2);

/*CHECK ARGS*/


int	ft_check_duplicates(int argc, char *argv[]);
int  is_number_and_int(char *argv[]);
int ft_check_args(int argc, char *argv[]);
int is_ordered(int argc, char *argv[]);

/*INIT STACK*/
t_stack		*init_stack_a(char *argv[]);
t_stack		*create_node(t_stack *first_list, int num);





//handle errors

//stack initiation

//node initiations

//stack utils

///commands

//algorithms

#endif
