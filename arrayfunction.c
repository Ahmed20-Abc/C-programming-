#include <stdio.h>

int linear_search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;  // Return index if key is found
    }
    return -1;  // Return -1 if not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = linear_search(arr, size, key);
    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found.\n");

    return 0;
}
