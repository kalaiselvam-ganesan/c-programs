#include<stdio.h>
#define MAX 100

// Functionn Declaration
void display(int b[], int a, int len)

int main()
{
    int a,b[MAX],i;
    // Getting 1st input from the user
    printf("\n Enter the value of A:");
    scanf("%d",&a);
    printf("\n Enter the Array of elements:");
    for(i=0;i<a;i++)
    {
        // Storing the array elements in integer array of b[i] 
        scanf("%d",&b[i]);
    }
    // Function call
    printf("Dispaly the array: ");
    display(b, 0, a);
    return 0;
}

// Function Definition
void display(int b[], int a, int len)
{
    if(a >= len)
        return;
    printf("%d",b[a]);
    display(b,a + 1,len); 
}