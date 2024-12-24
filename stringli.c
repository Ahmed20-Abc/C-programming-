#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];
    
    // strcpy() - Copy string
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; 

    strcpy(str2, str1);
    printf("String 2 (after strcpy): %s\n", str2);
    printf("Length of string 1: %lu\n", strlen(str1));
    strcpy(str3, str1);  
    strrev(str3); 
    printf("Reversed string: %s\n", str3);
    
    strcat(str1, " is a great programming language!");
    printf("Concatenated string: %s\n", str1);
    
    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are different.\n");
    }

    return 0;
}
