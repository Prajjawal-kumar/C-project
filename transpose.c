#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter a[%d][%d] number ",i,j);
            scanf("\t %d",&a[i][j]);
        }
        printf("\n");

    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          b[i][j]=a[j][i];
        }
    }
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}