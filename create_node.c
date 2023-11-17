#include "push_swap.h"

t_list	*new_node(int *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->value = *content;
	node->next = NULL;
	return (node);
}