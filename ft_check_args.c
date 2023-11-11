#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

//check input: not duplicate
//check if the nu is dgit
//check intsize
//check if is alrealdy sorted


long	ft_atol(const char *str)
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
		// printf("result %ld\n", result);
	}
	return (result * sign);
}


int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}

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
           // printf("There's nothing.\n");
        if ((argv[i][j] == '-' || argv[i][j] == '+') && argv[i][j + 1])
			j++;
            while (j < ft_strlen(argv[i]))
            {
                if (!ft_isdigit(argv[i][j]))
                    return(1);
                j++;
            }
			num = ft_atol(argv[i]);
			// printf("num %ld\n", num);
			if (num < INT_MIN || num > INT_MAX)
				return(1);
		i++;
    }
    return (0);
}


int main(int argc, char *argv[]) //is gonna be ft_check_args
{
    if (ft_check_duplicates(argc, argv)) 
    {
        ft_print_error();
        printf("duplicated.\n");
    } 
    else if (is_number_and_int(argv))
    {
        ft_print_error();
        printf("not int.\n");
    }
    else {
        printf("No duplicates found.\n");
    }
    return 0;
}
/*



//	num = ft_atol(*argv[i])

*/