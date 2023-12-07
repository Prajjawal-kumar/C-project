#include<stdio.h>
int main()
{
    int a[10],i,min;
    for(i=0;i<10;i++)
    {
        printf("enter a[%d] number: ",i);
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("minimum number is %d",min);
    return 0;

}