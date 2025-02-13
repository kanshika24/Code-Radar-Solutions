#include <stdio.h>
void main() {
    char ch;
    scanf("%c", &ch);
    if (isalpha(ch)) {
        char lowerCh = tolower(ch);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            printf("Vowel", ch);
        } else {
            printf("Consonant", ch);
        }
    } else if (isdigit(ch)) {
        printf("Digit", ch);
    } else {
        printf("Special Character", ch);
    }
}