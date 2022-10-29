#include<stdio.h>
void main()
{
    int arr[10];
    int n;
    int evencount=0;
    int oddcount = 0;
    printf("Enter the size of an array \n");
    scanf("%d",&n);
    printf("Enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    printf("The even count is: %d",evencount);
    printf("The odd count is: %d",oddcount);

}
