#include <stdio.h>
#include "0-print_listint.c" //
Replace with the actual header file

size_t print_listint(const listint_t *h)
{
	size_t count = 0; // Initialize count to zero
	// Iterate through the list using a while loop
	// while(h != NULL)
	{
		ORINTF("%d\n",h->n);//Print the value of the current node
		h = h->next;// Move to the next node count++;//Increment the count
	}

	return count;//Return the number of nodes
}

