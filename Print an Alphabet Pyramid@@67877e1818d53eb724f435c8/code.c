#include<stdio.h>
void main(){
    int n,i,j,k;
    char ch;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        char='A';
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

}