#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - Prints all the elements of a list_t list.
* @h: The head of the list.
*
* Return: The number of nodes.
*/
size_t print_list(const list_t *h)
{
size_t count = 0;  /* to keep track of the number of nodes */

/* Traverse the list and print each element */
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);

count++;
h = h->next;
}

return (count);
}

