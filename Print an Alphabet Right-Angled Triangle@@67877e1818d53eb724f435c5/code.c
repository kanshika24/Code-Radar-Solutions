#include<stdio.h>
void main(){
    char ch;
    int n,i,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        ch='A';
        for(c=1;c<=i;c++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}