#include<stdio.h>

// Function Declaration
int array1(int *a,int n);
int array2(int *b,int n);
int swap(int *a,int *b,int n); 

int main()
{
    int a[100],b[100],n;
    // Getting input from the user
    printf("Enter the value of N:");
    scanf("%d",&n);
    // Function call
    array1(a,n);
    array1(b,n);
    // Function call
    array2(a,n);
    array2(b,n);
    // Function call
    swap(a,b,n);
    // Function call
    array2(a,n);
    array(b,n);
    return 0;


}

// Function Definition
int array1(int *a,int n)
{
    int *aEnd=(a+(n-1));
    while(a<=aEnd)
    {
        scanf("%d",a++);
    }
}

// Function Definition
int array2(int *a,int n)
{
    int *aEnd=(a+(n-1));
    while(a<=aEnd)
    {
        printf("%d",*(a++));
    }
}

// Function Definition
int swap(int *a,int *b,int n)
{
    int *aEnd=(a+(n-1));
    int *bEnd=(b+(n-1));

    while(a<=aEnd && b<=bEnd)
    {
        *a^=*b;
        *b^=*a;
        *a=*b;
        a++;
        b++;
    }
}