#include "push_swap.h"

t_list	*create_node(int *value)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->value = *value;
	node->next = NULL;
	return (node);
}