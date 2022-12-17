#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
 * @list:
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	current = (*list)->next; /** start at the second element of the list*/
	while (current)
	{
		listint_t *prev = current->prev;
		while (prev && prev->n > current->n)
		{
			listint_t *temp = current;
			current = prev;
			prev = temp;

			prev->prev = current->prev;
			prev->next = current;
			current->prev = prev;
			current->next = temp->next;
			if (temp->next)
			{
				temp->next->prev = current;
			}
			print_list(*list);
		
			prev = prev->prev;
		}
			if (prev == NULL)
			{
			*list = current;
			}
		}
	current = current->next;
}



