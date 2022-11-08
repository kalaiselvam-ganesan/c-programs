#include <stdio.h>
#include <math.h>

// Fuction declaration 
int reverse(int b);

int main()
{
    int a,rev;
    // Getting input from the user 
    printf("Enter any number: ");
    scanf("%d", &a);
    // Function Call 
    rev=reverse(a); 
    printf("Reverse of %d = %d",a,rev);
    return 0;
}

// Function Definition
int reverse(int b) // Formal parameter
{
    int digit = (int) log10(b);    
    if(b==0)
        return 0;
    return ((b%10 * pow(10, digit)) + reverse(b/10));
}