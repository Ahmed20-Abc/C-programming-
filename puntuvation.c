#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char ch;
    int charCount = 0, wordCount = 0, sentenceCount = 0;
    int vowelCount = 0, consonantCount = 0, punctuationCount = 0;
    int inWord = 0;

    while ((ch = fgetc(file)) != EOF) {
        charCount++;

        
        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' ||
            tolower(ch) == 'o' || tolower(ch) == 'u') {
            vowelCount++;
        } else if (isalpha(ch)) {
            consonantCount++;
        }

       
        if (ch == '.' || ch == '!' || ch == '?') {
            punctuationCount++;
            sentenceCount++;
        }

       
        if (isspace(ch)) {
            if (inWord) {
                wordCount++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }

    if (inWord) {
        wordCount++;  
    }

    printf("Characters: %d\n", charCount);
    printf("Words: %d\n", wordCount);
    printf("Sentences: %d\n", sentenceCount);
    printf("Vowels: %d\n", vowelCount);
    printf("Consonants: %d\n", consonantCount);
    printf("Punctuation marks: %d\n", punctuationCount);

    fclose(file);
    return 0;
}
