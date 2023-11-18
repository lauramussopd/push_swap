#include "push_swap.h"

// la funzione reestituisce un puntaatore a un  tipo t_list e accetta un puntatore a intero0

t_list	*create_node(int *value) 
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list)); //crea lo spazio per il node
	if (!node)
		return (NULL);
	node->value = *value;
	node->next = NULL;
	return (node);
}

/*
	node->value = *value;
	node->next = NULL;
	return (node);

	1. node e' un puntatore a una struttura di tipo t list
	-> accedi a un menbro della struttura 
	node->value si riferisce al campo value della struttura a cui node sta puntanto
	2. *value e' un puntattore ad intero
	quindi: imposta il campo value del nodo con il valor appena fornito
	
	*/