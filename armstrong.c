#include<stdio.h>
int main()
{
    int r,s=0,n,k;
    printf("enter a number: ");
    scanf("%d",&n);
    k=n;
    while(n>0)
    {
        r=n%10;
        s=s+r*r*r;
        n=n/10;
    }
    if(s==k)
    {
        printf("the number is armstrong");
    }
    else
    {
       printf("the number is not armstrong");

    }
    return 0;
}