#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3],s[3][3];
    printf("enter the elements of array");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d%d",&a[i][j],&b[i][j]);
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<=2;i++)
    {
        printf("\n");
        for(j=0;j<=2;j++)
        printf("%d \t",s[i][j]);

    }
    return 0;
}