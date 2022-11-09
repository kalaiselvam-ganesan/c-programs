 #include <stdio.h>
#include <math.h>

// Function declarations  
int reverse(int a);
int Palindrome(int b);



int main()
{
    int a;
    // Getting input from the user
    printf("Enter any number: ");
    scanf("%d", &a);
    // Functionn call
    // checking the condition of if-else
    // Whether the a number is palindrome or not
    if(Palindrome(a) == 1)
    {
        printf("%d is palindrome\n",a);
    }
    else
    {
        printf("%d is NOT palindrome\n",a);
    }
    return 0;
}

// Function Definition
int isPalindrome(int a) //Formal parameter
{
    if(a==reverse(a))
    {
        return 1;
    }   
    return 0;
}

// Function definition
int reverse(int b) //Formal parameter
{
    int digit = (int)log10(b);
    if(b==0)
        return 0;
    return ((b%10 * pow(10, digit)) + reverse(b/10));
}