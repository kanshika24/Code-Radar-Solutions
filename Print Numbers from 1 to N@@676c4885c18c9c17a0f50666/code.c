#include<stdio.h>
void main(){
    int n,j,i,num=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ", num);
            num++;
        }
    }
}