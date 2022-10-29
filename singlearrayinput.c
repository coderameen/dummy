#include<stdio.h>
void main()
{
    int arr[10];
    int n;
    printf("Enter the size of array!! \n");
    scanf("%d",&n);
    printf("enter the elements of array \n");
    //to take elements of array
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //print the element of array
    printf("the array elmeents are: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
}
