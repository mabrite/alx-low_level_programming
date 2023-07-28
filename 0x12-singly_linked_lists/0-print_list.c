#include "lists.h"
#include <stdio.h>
/**
 * print_list - It Prints all the elements of a list_t list.
 * @a: The list_t list.
 *
 * Return: The number of nodes in a
 */

size_t print_list(const list_t *a)

{
size_t nodes = 0;
while (a)

{
if (a->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", a->len, a->str);
nodes++;
a = a->next;
}
return (nodes);
}
