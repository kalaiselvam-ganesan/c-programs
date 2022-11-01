#include<stdio.h>

int main()
{
    char a;
    // Getting input from the user
    printf("\n Enter the Value of A:");
    scanf("%c",&a);
    // Checking the condition of if-else
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        printf("%c it is vowels",a);
    }
    else
    {
        printf("%c in not a Vowels",a);
    }
    return 0;
}