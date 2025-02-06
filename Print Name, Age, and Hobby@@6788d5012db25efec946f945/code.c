#include <stdio.h>
void main()
{
    char name[50];
    int age;
    char hobby[50];
    scanf("%49s",&name);
    scanf("%d",&age);
    scanf("%49s",&hobby);
    printf("Name: %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);
}