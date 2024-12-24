#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int value = 2;
    for (int i = 1; i <= n; i++) {
        printf("%d ", value);
        value *= 2;
    }
    printf("\n");

    return 0;
}
