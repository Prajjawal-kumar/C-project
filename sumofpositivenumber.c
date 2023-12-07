#include<stdio.h>
int main()
{
    int a[5],i,sum;
    sum=0;

    for(i=0;i<=4;i++)
    {
    scanf("%d",&a[i]);
    }
    
    
    for(i=0;i<=4;i++)
    {
        if(a[i]>0)
        sum=sum+a[i];
    }
    
        printf("the sum is %d",sum);
    
    
    return 0;
}