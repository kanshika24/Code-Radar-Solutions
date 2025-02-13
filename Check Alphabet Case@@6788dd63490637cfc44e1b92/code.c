#include<stdio.h>
void main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z')
    {
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
}