#include<stdio.h>
void main(){
    int n,i,c,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(c=1;c<=n-i;c++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d ", k);
        }
        printf("\n");
    }
}