
#include "push_swap.h"

/*--------CREA Y INICIALIZA stack_a CON LOS ARGUMENTOS DE ENTRADA--------*/

static void	init_a(int argc, char **argv, t_list **a)
{
	int		num;
	int		i;
	t_list	*node;

	i = 1;
	while (i < argc)
	{
		num = my_atoi(argv[i], a);
		node = new_node(&num);
		add_last(a, node);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	init_a(argc, argv, &a);
	if (check_dup(a) == -1)
	{
		cleaner(&a);
		return (write(2, "Error\n", 6));
	}
	if (check_order(a) == 1)
		select_alg(&a, &b);
	cleaner(&a);
	cleaner(&b);
	return (0);
}
