#include<stdio.h>
void main(){
    int c,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(c=1;c<=i;c++){
            printf("* ");
        }
        printf("\n");
    }
}