#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *size_t list_len - returns then number of elements in a list.
 *
 * @h: singly linked list.
 * Return: number of elements in the list.
 *
 */

size_t list_len(const list_t *h)

{
	size_t nelem = 0;
		while (h != NULL)
		{

			h = h->next;
			nelem++;
		}
return (nelem);

}
