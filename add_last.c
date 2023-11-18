#include "push_swap.h"

//trova l'ultimo nodo della lista e restituisce un puntatore all'ultimo nodo di una lista concatenata

t_list	*find_last(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next; //continua a spostrsi al nodo successivo dino a raggiongere l'ultimo nodo della lista
	return (lst); //restituisce un puntatore all'ultimo nodo raggiunto
}
/*Adds *node to the end of list **lst. Returns a pointer to the first node.*/

//t_list *lst e' il puntatore alla tsta della lista

void add_last(t_list **lst, t_list *node)
{
    t_list *aux; // dichiarazione di un puntatore ausiliario di tipo t-list
    if (*lst) //se la lista non e' vuota, entra
    {
        aux = find_last(*lst); // chiama la funzione last per ottenere un puntatore all'ultimo nodo e assegna questo valore a aux
        aux->next = node;   //aggiunge un nuovo nodo
    }
    else
    {
        *lst = node; // Imposta il puntatore alla testa della lista (*lst) sul nuovo nodo (node), poiché in questo caso il nuovo nodo è l'unico nodo nella lista.
    }
}