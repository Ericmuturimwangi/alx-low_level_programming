#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Description: This function frees all the memory occupied by
 *              each element of the list_t linked list.
 */
void free_list(list_t *head)
{
    list_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current->str);
        free(current);
    }
}

