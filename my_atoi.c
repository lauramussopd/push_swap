
/*-------------ATOI + FILTRA NO ENTEROS Y INT LIMITS------------------*/

#include "push_swap.h"

int	my_atoi(const char *str, t_list **lst)
{
	int			i;
	long int	nbr;
	int			flag;

	(0 || (i = 0) || (nbr = 0) || (flag = 1));
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			flag = -1;
	if (!(str[i] >= '0' && str[i] <= '9'))
		ft_error(lst);
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + (str[i++] - 48);
	if (str[i] != '\0')
		ft_error(lst);
	nbr = flag * nbr;
	if ((nbr) < INT_MIN || nbr > INT_MAX)
		ft_error(lst);
	return (nbr);
}
