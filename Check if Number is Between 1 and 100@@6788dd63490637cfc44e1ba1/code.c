#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);
    if(x>=1&&x<=100&&x!=0){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
}