#include<stdio.h>
void main(){
    int n,i,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(c=i;c<=n;c--){
            printf("*");
        }
        printf("\n");
    }
}