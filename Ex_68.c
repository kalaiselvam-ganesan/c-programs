#include<stdio.h>

// Function Declaration
int reverse(int *a,int n);

int main()
{
    int a[100],n;
    // Getting input from the user
    printf("\n Enter the Value of N:");
    scanf("%d",&n);
    int *ptr1=a;
    int *ptr2;
    ptr2=&a[n-1];
    printf("Array Elements:");
    while(ptr1<=ptr2)
    {
        scanf("%d",ptr1++);
    }
    printf("Before Reverse:");
    // function call
    reverse(a,n);

    while(ptr1<ptr2)
    {
        *ptr1^=*ptr2;
        *ptr2^=*ptr1;
        *ptr1^=*ptr2;
        ptr1++;
        ptr2--;
    }
    printf("After Reverse:");
    // Function Call
    reverse(a,n);
    return 0;
}

// Funnction Definition
int reverse(int *a,int n)
{
    int *aEnd=(a+n-1);
    while(a<=aEnd)
    {
        printf("%d",*a);
        a++;
    }
}