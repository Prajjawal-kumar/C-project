#include<stdio.h>
int main()
{
    int rev=0,r,n,k;
    printf("enter a number: ");
    scanf("%d",&n);
    k=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==k)
    {
        printf("the number is pallindrome");
    }
    else
    {
        printf("the number is not pallindrome");
    }
    return 0;
}