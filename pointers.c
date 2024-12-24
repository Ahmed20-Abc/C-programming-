#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;

    printf("Value of a = %d, b = %d\n", a, b);
    printf("Using pointers: *p1 = %d, *p2 = %d\n", *p1, *p2);

    return 0;
}
