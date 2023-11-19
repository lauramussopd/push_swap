
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "./printf/ft_printf.h"
# include <stdio.h>
# include <limits.h>


typedef struct s_list
{
	int				value;
	struct s_list	*next;
}					t_list;


/*UTILS*/

int		my_atoi(const char *str, t_list **lst);
void	add_last(t_list **lst, t_list *node);
t_list	*create_node(int *value);
t_list	*find_last(t_list *lst);
void	ft_error(t_list **lst);
int check_duplicate(t_list *lst);
int check_order(t_list *lst);

/*MOVEMENTS*/
void swap(t_list **lst);
void swap_a(t_list **a);
void swap_b(t_list **b);

void	push(t_list **src, t_list **dest);
void push_a(t_list **stack_a, t_list **stack_b);
void push_b(t_list **stack_a, t_list **stack_b);

void    rotate(t_list **lst);
void    rotate_a(t_list **a);
void    rotate_b(t_list **b);

void    reverse_rotate(t_list **lst);
void    rra(t_list **a);
void    rrb(t_list **b);


/*SORT*/

void two_num(t_list **lst);
void sort_three(t_list **lst);
void sort_four(t_list **stack_a, t_list **stack_b);

/*UTILS*/

void	rotate_min(t_list **lst, int size);
int	find_min(t_list **lst);

#endif
