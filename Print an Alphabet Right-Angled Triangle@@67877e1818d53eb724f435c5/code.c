#include<stdio.h>
void main(){
    char ch;
    int n,i,c,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        ch='A';
        for(c=1;c<=i;c++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}