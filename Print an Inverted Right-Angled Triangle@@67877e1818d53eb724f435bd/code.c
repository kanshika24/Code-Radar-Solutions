#include<stdio.h>
void main()
{
    int c;
    int n;
    scanf("%d",&n);
    for(n;n>1;n--)
    {
        for(c=1;c<n;c++)
        {
            printf("*");
        }printf("\n");
    }
}