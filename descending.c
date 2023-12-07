#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    for(i=0;i<10;i++)
    {
        printf("enter a[%d] number",i);
        scanf("\n %d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array is");
    for(i=0;i<10;i++)
    {
        printf("\n %d",a[i]);
    }
    return 0;
}