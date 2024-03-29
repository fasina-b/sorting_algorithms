#include "sort.h"

/**
 * swap - Swap two nodes in a doubly linked list.
 * @head: A pointer to the head of the list.
 * @node1: A pointer to the first node to swap.
 * @node2: A pointer to the second node to swap.
 */
void swap(listint_t **head, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = *node1;
	node2->prev = (*node1)->prev;
	node2->next = *node1;
	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
	else
		*head = node2;
	(*node1)->prev = node2;
	*node1 = node2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 *                       ascending order using the insertion sort algorithm.
 * @list: A pointer to the head of the list.
 * Description: This function sorts a doubly linked list of integers
 *              using the insertion sort algorithm and prints the list
 *              after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *toInsert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (current = (*list)->next; current != NULL; current = temp)
	{
		temp = current->next;
		toInsert = current->prev;
		while (toInsert != NULL && current->n < toInsert->n)
		{
			swap(list, &toInsert, current);
			print_list((const listint_t *)*list);
		}
	}
}
