#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int x = 10, y = 5;
    printf("Sum (a + b) = %d\n", add(x, y));
    printf("Difference (a - b) = %d\n", subtract(x, y));
    printf("Difference (b - a) = %d\n", subtract(y, x));
    return 0;
}
