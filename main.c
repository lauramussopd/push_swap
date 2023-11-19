
#include "push_swap.h"



static void	init_stacka(int argc, char **argv, t_list **a)
{
	int		num;	
	int		i;
	t_list	*node; //puntatore di tipo t_list che punta alla struttura

	i = 1;
	while (i < argc)
	{
		//num = my_atoi(argv[i]); //converte la stringa in un numero intero esalva il risultaato in num
		
		num = ft_atoi(argv[i]);
		node = create_node(&num);
		add_last(a, node);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	// (void)argv;
	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	init_stacka(argc, argv, &a);

	/*int result = check_duplicate(a);
		if (result == -1) {
			printf("Yes duplicates\n");
		} else {
			printf("No duplicates.\n");
		}*/
	
///////-------------------------

	 if (check_duplicate(a) == 0)
	 {
	 	printf("no duplicates\n");
	 }
	 if (check_duplicate(a) == -1)
	 {
	 	printf("yes duplicates\n");
		//ft_error(&a);
	 }

///////----------------------------

	 if (check_order(a) == 0)
	 {
	 	printf("ordered\n");
	 }
	 if (check_order(a) == -1)
	 {
	 	printf("not orded\n");
		//select_alg funzione che ti dice che algoritmo scegliere
		//swap(&a);
		//printf("value en a%d\n", a->value);
		//push(&a, &b);
		//rotate(&a);
		//reverse_rotate(&a);
		print_lst(a, "stack a antes de ordenar");
		if (stack_size(a) == 3)
			sort_three(&a);
		if (stack_size(a ) == 4)
			sort_four(&a, &b);
		if (stack_size(a) == 5)
			sort_five(&a, &b);
		print_lst(a, "stack a despue de ordenar");
		print_lst(b, "stack b despue de ordenar");
	 }
///////*--------------------------

	 
	// 	cleaner(&a);
	// 	return (write(2, "Error\n", 6));
	// }
	// if (check_order(a) == 1)
	// 	select_alg(&a, &b);
	// cleaner(&a);
	// cleaner(&b);
	// return (0);
}
