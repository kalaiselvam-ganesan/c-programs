#include<stdio.h>

// Function Declaration
int array(int a[],int b);

int main()
{
    int a[100],b[100];
    int i,n;
    int *ptr1=a;
    int *ptr2=b;
    int *ptr3; 
    // Getting input from the user
    printf("Enter the value of N:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    ptr3=&a[n-1];
    printf("Before Copying:");
    array(a,n);
    printf("Before Copying:");
    array(b,n);

    while(a<=ptr3)
    {
        *ptr2 = *ptr1;
        ptr2++;
        ptr1++;
    }
    printf("After copying:");
    array(a,n);
    printf("after copying:");
    array(b,n);
    return 0;

}

// Function Definition
int array(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(a+i));
    }
}