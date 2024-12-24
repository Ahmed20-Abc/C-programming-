#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // Skip printing 5
        }
        if (i == 8) {
            break; // Exit the loop when i is 8
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
