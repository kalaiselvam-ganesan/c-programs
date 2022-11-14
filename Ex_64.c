#include<stdio.h>

// Function Declaration
int swap(int *a,int *b);

int main()
{
    int a,b,c;
    // Getting 1st input from the user
    printf("Enter the value of A:");
    scanf("%d",&a);
    // Getting 2nd input from the user
    printf("Enter the value of B:");
    scanf("%d",&b);
    printf("Before swap a:%d  b:%d",a,b);
    // Funnction call
    swap(&a,&b);
    return 0;
}
    
// Function Definition
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a= *b;
    *b= temp;
    printf("\n After swap a:%d  b:%d",*a,*b);
}
