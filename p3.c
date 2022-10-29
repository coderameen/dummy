/*
#include<stdio.h>
void main()
{
    int a[10][10];
    int b[10][10];
    int rows;
    int columns;
    printf("Enter the size of rows \n");
    scanf("%d",&rows);
    printf("Enter the size of columns: \n");
    scanf("%d",&columns);

    printf("Enter the element of array");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {

            scanf("%d",&a[i][j]);
            b[j][i] = a[i][j];

        }
    }

    printf("The Transpose matrix is : \n");

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}

*/
#include<stdio.h>
#include<conio.h>
void main()
{

int a[10][10],b[10][10],i,j,m,n;

printf("Enter order of matrix for m and n ");
scanf("%d%d",&m,&n);
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{
printf("Enter value of a[%d][%d] ",i,j);
scanf("%d",&a[i][j]);
b[j][i]=a[i][j];
}
}
printf("\nTranspose of matrix:\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=m;j++)
{
printf("%4d",b[i][j]);
}
printf("\n");
}
getch();
}
