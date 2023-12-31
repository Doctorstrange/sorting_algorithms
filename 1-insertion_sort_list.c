#include "sort.h"

/**
 * table_swap_node - Swap two nodes doubly-linked list.
 * @h: pointer to the head of the doubly-linked list.
 * @n1: pointer to the first node for swap
 * @n2: pointer to second node for swap
 */
void table_swap_node(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
	{
		n2->next->prev = *n1;
	}
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
	{
		(*n1)->prev->next = n2;
	}
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list
 * @list: A pointer to the head of a doubly-linked.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *ins, *tmp;

	if (*list == NULL || list == NULL || (*list)->next == NULL)
	{
		return;
	}
	for (current = (*list)->next; current != NULL; current = tmp)
	{
		tmp = current->next;
		ins = current->prev;
		while (ins != NULL && current->n < ins->n)
		{
			table_swap_node(list, &ins, current);
			print_list((const listint_t *)*list);
		}
	}
}
