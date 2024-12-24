#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;  // Pointer to the array

    printf("Array elements using pointers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));  // Accessing array elements using pointer
    }
    printf("\n");

    return 0;
}
