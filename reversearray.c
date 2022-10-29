#include<stdio.h>
void main()
{
    int arr[10];
    int n;
    printf("Enter the size of array \n");
    scanf("%d",&n);

    printf("Enter the elements of array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The reverse of array is: \n");
    for(int i= n-1;i>=0;i--)
    {
        printf("%d \n",arr[i]);
    }
}
