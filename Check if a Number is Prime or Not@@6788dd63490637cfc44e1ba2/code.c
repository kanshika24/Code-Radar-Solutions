#include<stdio.h>
void main(){
    int num,i,Prime=1;
    scanf("%d",&num);
    if(num<=1){
        printf("Not Prime");
    }
    else{
        i=2;
        while(i<=num/2){
            if(num%i==0){
                printf("Not Prime");
            }
            i++;
        }
        if(i>num/2){
            printf("Prime");
        }
    }
}