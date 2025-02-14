#include <stdio.h>
void main() {
    int num, i;
    scanf("%d", &num);
    if (num <= 1) {
        printf("%d is Not Prime\n", num); 
    } else {
        int isPrime = 1;
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is NOT a prime number.\n", num);
        }
    }
}