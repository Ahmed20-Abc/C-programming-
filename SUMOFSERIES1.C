#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i); // Adding the reciprocals of even numbers
    }

    printf("Sum of series: %.2f\n", sum);
    return 0;
}

