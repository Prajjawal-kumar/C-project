#include<stdio.h>
int main()
{
    int a,b;
    char op;
    float ans;
    printf("enter first operand");
    scanf("%d",&a);

    printf("enter operator");
    scanf("%s",&op);

    printf("enter second operator");
    scanf("%d",&b);

    switch(op)
    {
        case'+':
        ans=a+b;
        printf("the sum of two numbers=%f",ans);
        break;

        case'-':
        ans=a-b;
        printf("the differnce of two numbers=%f",ans);
        break;

        case'*':
        ans=a*b;
        printf("the product of two numbers=%f",ans);
        break;

        case'/':
        ans=a/b;
        printf("the sum of two numbers=%f",ans);
        break;

        default:
        printf("invalid operator");

    }
return 0;
}