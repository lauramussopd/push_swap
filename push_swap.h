
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
void swap_stack(t_list **lst);
void swap_a(t_list **a);
void swap_b(t_list **b);

#endif
