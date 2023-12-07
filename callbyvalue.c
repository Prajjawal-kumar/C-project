#include<stdio.h>
void swap(int , int);
int  main()
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("the value after swapping are %d \t %d",x,y);
     
}