
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"
#include "./printf/ft_printf.h"
# include <stdio.h>
# include <limits.h>


typedef struct s_list
{
	int				value;
	struct s_lista	*next;
}					t_list;


/*UTILS*/

long	ft_atol(const char *str);

#endif
