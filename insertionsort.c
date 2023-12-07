#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    for(i=0;i<10;i++)
    {
        printf("enter a[%d] number: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        temp=a[i];
        for(j=i;j>=0;j--)
        {
           if(temp<a[j])
           {
            a[j+1]=a[j];
            a[j]=temp;
            temp=a[j];
           }
        }
    }
    printf("the sorted array is following \n");
    for(i=0;i<10;i++)
    {
        printf("%d \t",a[i]);
    }
}