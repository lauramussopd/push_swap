#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>

//check input: not duplicate
//check if the nu is dgit
//check intsize
//check if is alrealdy sorted
/*
void	ft_print_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

int	ft_atol(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	return (result * sign);
}

void	ft_isnumber(char *argv[])
{


}
*/
void	ft_print_error()
{
	write(1, "Error\n", 6);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}

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

int main(int argc, char *argv[]) //is gonna be ft_check_args
{
    if (ft_check_duplicates(argc, argv)) {
        ft_print_error();
    } else {
        printf("No duplicates found.\n");
    }

    return 0;
}
/*
int	ft_is_number_and_int(char *str)
{

}


void ft_check_args(int argc, char *argv[])
{
	if (ft_check_duplicates(argc, argv))
	{
		ft_print_error();
	}
    ft_is_number_and_int();
	
}

//	num = ft_atol(*argv[i])

*/