#include <stdio.h>

int main()
{
    int arr[100];
    int a,i;
    int *ptr = arr;    
    // Getting input from the user
    printf("Enter the value of A:");
    scanf("%d",&a);
    printf("Enter elements in array:\n");
    for (i=0;i<a;i++)
    {
        scanf("%d",(ptr+i));   
    }
    for (i=0;i<a;i++)
    {
        printf("%d, ", *(ptr+i));
    }
    return 0;
}