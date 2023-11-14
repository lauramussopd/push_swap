#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdbool.h>
#include <limits.h>
#include "./printf/ft_printf.h"


typedef struct s_node
{
	int		value; //dato
	struct s_node *next;
} t_node; //ESTA ES EL NODO, LA STRCUT CQUE COMPONE LA LISTA


typedef struct s_list
{
	t_node	*first;
} t_list;


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
t_list		*init_stack_a(char *argv[]);
t_node		*create_node(t_node *first_list, int num);



/*MOVEMENTS*/

int    stack_size(t_list *stack);

void    swap(t_list *stack);
void    push(t_list *stack_a, t_list *stack_b);

void    swap_a(t_list *stack);
void    swap_b(t_list *stack);
void    swap_both(t_list *stack_a, t_list *stack_b);

void    push_a(t_list *stack_a, t_list *stack_b);
void    push_b(t_list *stack_a, t_list *stack_b);


void    rotate(t_list *stack);


void    reverse_rotate(t_list *stack);
//handle errors

//stack initiation

//node initiations

//stack utils

///commands

//algorithms

#endif
