/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:24:25 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/11/08 15:08:48 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*-------------ATOI + FILTRA NO ENTEROS Y INT LIMITS------------------*/

#include "push_swap.h"

int	my_atoi(const char *str, t_lista **lst)
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
		ft_err(lst);
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + (str[i++] - 48);
	if (str[i] != '\0')
		ft_err(lst);
	nbr = flag * nbr;
	if ((nbr) < INT_MIN || nbr > INT_MAX)
		ft_err(lst);
	return (nbr);
}
