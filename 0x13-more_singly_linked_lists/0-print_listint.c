#include <stdio.h>
#include "listint.h" // Include the custom header file

int main() {
    // Example usage:
    listint_t node1, node2, node3;
    node1.n = 1;
    node1.next = &node2;
    node2.n = 2;
    node2.next = &node3;
    node3.n = 3;
    node3.next = NULL;

    size_t node_count = print_listint(&node1);
    printf("Number of nodes: %zu\n", node_count);

    return 0;
}
