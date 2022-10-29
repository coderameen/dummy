#include<stdio.h>
void main()
{
    int arr[10][10];
    int rows;
    int columns;
    printf("Enter the size of rows : \n");
    scanf("%d",&rows);
    printf("Enter the size of columns: \n");
    scanf("%d",&columns);

    printf("Enter the elements of the matrix: \n");

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix are: \n");
    for(int i=0;i<rows;i++)\
    {
        for(int j=0;j<columns;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
}
