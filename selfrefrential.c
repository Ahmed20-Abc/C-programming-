#include <stdio.h>

// Define a structure for a linked list node
struct Node {
    int data;
    struct Node *next;  // Pointer to the next node
};

int main() {
    // Create two nodes
    struct Node node1, node2;

    // Assign values
    node1.data = 10;
    node2.data = 20;
    node1.next = &node2;  // node1 points to node2
    node2.next = NULL;  // node2 is the last node

    // Print the list
    printf("Node 1 data: %d\n", node1.data);
    printf("Node 2 data: %d\n", node2.data);

    return 0;
}
