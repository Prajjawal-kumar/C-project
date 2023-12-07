#include<stdio.h>
int main()
{
    int i,j,temp,a[10];
    for(i=0;i<10;i++)
    {
        printf("enter a[%d] number: ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<=10-i;j++)
        {
            if(a[j]>a[j+1])
           {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
        }
    }
    printf("the sorted array is given below \n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;

}
