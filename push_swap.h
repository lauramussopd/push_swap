
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
t_list	*last(t_list *lst);
void	ft_error(t_list **lst);


#endif
