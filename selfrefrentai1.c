#include <stdio.h>


struct Node {
    int data;
    struct Node *next; 

int main() {
    
    struct Node node1, node2;

  
    node1.data = 10;
    node2.data = 20;
    node1.next = &node2;  
    node2.next = NULL; 

    
    printf("Node 1 data: %d\n", node1.data);
    printf("Node 2 data: %d\n", node2.data);

    return 0;
}
}