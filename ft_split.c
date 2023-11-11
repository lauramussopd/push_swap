#include "push_swap.h"
#include <stdlib.h>
#include <string.h>


//count: how many substring, the num of string in the dinamic allocated memory
//1 - how many substring do we need to allocate space for?
//2 - we allocate space to store each substring
//3 - get the lenght of the string

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}


char	**ft_split(char *s, char *separetors, int *count);
{

    int len = ft_strlen(s); //the lenght of a string not including the NULL

    *count = 0;

    int i = 0;
    while (i < len)
    {
        if 

    }
}