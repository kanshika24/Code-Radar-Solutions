#include<stdio.h>
void main()
{
    int c,n,i;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(c=1;c<=i;c++)
        {
            printf("*\t");
        }printf("\n");
    }
}