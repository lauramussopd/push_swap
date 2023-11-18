#include "push_swap.h"

int check_duplicate(t_list *lst)
{
    t_list *aux;
    if(!lst)
        return (-1);
    while(lst != 0) //ciclo che scorre la lista principale
    {
        aux = lst->next;
        while (aux != 0) // avvia un secondo ciclo che score il resto della lista a partire dal nodo successivo a lst
        {
            if(lst->value == aux->value)
                return (-1);
                aux = aux->next; //sposta il puntatore ausiliario al prox nodo della lista
        }
        lst = lst->next;
    }
    return (0); //non ci sono duplicati
}

int check_order(t_list *lst)
{
    while (lst->next != NULL)
    {
        if (lst->value > lst->next->value)
            return(-1);
        lst = lst->next;
    }
    return(0);
}