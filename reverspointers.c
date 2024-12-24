#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = str;

    // Move the pointer to the end of the string
    ptr += strlen(str) - 1;

    printf("String in reverse order: ");
    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");

    return 0;
}
