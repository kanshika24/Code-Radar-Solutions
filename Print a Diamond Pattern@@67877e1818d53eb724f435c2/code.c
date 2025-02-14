#include<stdio.h>
void main(){
    int n,i,c,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(c=1;c<=n-i;c++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n-i;i>=1;i--){
        for(c=1;c<=n;c++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}