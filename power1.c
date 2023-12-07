#include<stdio.h> 

int main()
{
    int i,j,k,power (int,int);
    printf("enter base and power");
    scanf("%d%d",&i,&j);
    k=power(i,j);
    printf("the power %d to the base %d = %d",j,i,k);
    return (0);
}
int power(int x,int y)
{
    int m,p=1;
    for(m=1;m<=y;m++)
      p=p*x;
      return (p);
}