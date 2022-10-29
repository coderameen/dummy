#include<stdio.h>
void main()
{
    int a[2][2];
    int b[2][2];

    printf("Enter the values of array 1: \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the values of array 2: \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The sum of the arrays are: \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}
