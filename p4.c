#include<stdio.h>
void main()
{
    int a[10][10];
    int rows,columns;
    printf("Enter the rows and columns \n");
    scanf("%d %d",&rows,&columns);
    printf("Ebnter the elements of the matrixs");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //symattric or not

    //a[i][j] === a[j][i]

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(a[i][j] == a[j][i])
            {
                printf("The given matrix is Symmetric");
                return;
            }


        }
    }
    printf("not symmetric");
}
