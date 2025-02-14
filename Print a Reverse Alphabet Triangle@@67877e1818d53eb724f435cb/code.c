#include<stdio.h>
void main(){
    int n,i,j;
    char ch;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        ch='A';
        for(j=1;j<=i;j++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}