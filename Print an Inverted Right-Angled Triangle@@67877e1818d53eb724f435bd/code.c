#include<stdio.h>
void main()
{
    int r,c;
    for(r=2;r>1;r--)
    {
        for(c=1;c<r;c++)
        {
            printf("*");
        }printf("\n");
    }
}