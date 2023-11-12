#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

//check input: not duplicate
//check if the nu is dgit
//check intsize
//check if is alrealdy sorted


int	ft_check_duplicates(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;

	while(i < argc)
	{
		j = i + 1; //  to avoid comparing the current element argv[i] with itself 
		while (j < argc)
		{
			if(ft_strcmp(argv[i], argv[j]) == 0)
			{
				return (1); //found a duplicate
			}
			j++;
		}
		i++;
	}
	return (0); //no duplicates found
}

int  is_number_and_int(char *argv[])
{
    int i;
	long num;

    i = 1;
    while(argv[i])
    {
        int j;
        j = 0;
        if (ft_strlen(argv[i]) == 0)
			return(1);
        if ((argv[i][j] == '-' || argv[i][j] == '+') && argv[i][j + 1])
			j++;
            while (j < ft_strlen(argv[i]))
            {
                if (!ft_isdigit(argv[i][j]))
                    return(1);
                j++;
            }
			num = ft_atol(argv[i]);
			if (num < INT_MIN || num > INT_MAX)
				return(1);
		i++;
    }
    return (0);
}
int ft_check_args(int argc, char *argv[]) 
{
    if (ft_check_duplicates(argc, argv)) 
    {
        ft_print_error();
        ft_printf("duplicated.\n");
		return(1);
    } 
    else if (is_number_and_int(argv))
    {
        ft_print_error();
        ft_printf("not int.\n");
		return(1);
    }
    else {
        ft_printf("input args, correct! no duplicates, no letters\n");
    }
    return 0;
}

int is_ordered(int argc, char *argv[])
{
	if (argc < 3)
	{
		return (1);
	}

	int i;

	i = 1;

	while ( i < argc - 1)
	{
		int current = ft_atol(argv[i]);
		int following = ft_atol(argv[i + 1]);
		if (current > following)
		{
			ft_printf("arguments are NOT ordered\n");
			return (1);
		}
		i++;
	}
	ft_printf("arguments are ordered\n");
	return (0); //arguments are ordered
}