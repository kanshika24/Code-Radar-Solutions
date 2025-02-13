#include<stdio.h>
void main(){
    int m;
    scanf("%d",&m);
    switch(m)
    {
        case 1,3,5,7,9,11:printf("31");break;
        case 2: printf("28");break;
        case 4,6,8,10: printf("30");break;
        default: printf("Invalid month");
    }
}