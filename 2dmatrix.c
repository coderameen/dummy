#include<stdio.h>
void main()
{
    int arr[2][2] = {11,22,33,44};
    //print that matrix
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
}
