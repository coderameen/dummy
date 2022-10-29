#include<stdio.h>
void main()
{
    int arr[10];
    int n;
    int pos_sum = 0;
    int neg_sum = 0;
    printf("Enter the size of an array: \n");
    scanf("%d",&n);

    printf("Enter the elements of array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] > 0)
        {
            pos_sum = pos_sum + arr[i];
        }
        else
        {
            neg_sum = neg_sum + arr[i];
        }
    }
    printf("The positive sum of the numbert are: %d",pos_sum);
    printf("The negative sum of the numbers are: %d",neg_sum);
}
