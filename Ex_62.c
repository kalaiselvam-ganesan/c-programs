#include<stdio.h>

int main()
{
    int n;
    // declaring pointer variable as a integer
    int *ptr;
    // Getting input from the user
    printf("Enter the value of N:");
    scanf("%d",&n);
    // assign a value to pointer
    ptr=&n;
    printf("N : %d\n",n);
    printf("Address of  N : %d\n",&n);
    printf("Ptr : %d\n",ptr);
    printf("Address of Ptr : %d\n",&ptr);
    printf("Deference of ptr : %d\n",*ptr);
    return 0;
}