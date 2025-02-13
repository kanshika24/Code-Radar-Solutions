#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (isalpha(ch)) {
        char lowerCh = tolower(ch);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            printf("Vowel\n", ch);
        } else {
            printf("Consonant.\n", ch);
        }
    } else if (isdigit(ch)) {
        printf("Digit.\n", ch);
    } else {
        printf("Special Character.\n", ch);
    }

    return 0;