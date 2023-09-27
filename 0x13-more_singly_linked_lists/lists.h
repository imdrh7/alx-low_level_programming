#ifndef LISTINT_H
#define LISTINT_H

#include <stddef.h>

/* Define the structure for the listint_t type */
typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/* Function prototype to print all elements and return the number of nodes */
size_t print_listint(const listint_t *h);

#endif /* LISTINT_H */
