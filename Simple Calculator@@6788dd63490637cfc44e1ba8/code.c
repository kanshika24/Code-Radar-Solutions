 #include<stdio.h>
void main()
{
    int a,b;
    char options;
    scanf("%d%d",&a,&b);
    scanf("%c",&options);
    switch(options)
    {
        case '+': printf("Addition=%d",a+b);break;
        case '-': printf("Subtraction=%d",a-b);break;
        case '*': printf("Multiplication=%d",a*b);break;
        case '/': printf("Division=%d",a/b);break;
        default: printf("\n No Operation");
    }
