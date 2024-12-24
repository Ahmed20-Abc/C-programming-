#include <stdio.h>

int main() {
    FILE *file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  // Display the file contents
    }

    fclose(file);
    return 0;
}
