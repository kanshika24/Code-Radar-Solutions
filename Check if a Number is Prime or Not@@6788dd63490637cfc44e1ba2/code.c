#include <stdio.h>
void main() {
    int num, i;
    scanf("%d", &num);
    if (num <= 1) {
        printf("Not Prime"); 
    } else {
        int Prime = 1;
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                Prime = 0;
                break;
            }
        }
        if (Prime) {
            printf("Prime");
        } else {
            printf("Not Prime");
        }
    }
}