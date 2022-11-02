#include <stdio.h>

int main() {
    char a;
    // Getting input from the user
    printf("\n Enter the Value  of A:");
    scanf("%c",&a);
    // checking the conditiion of if-else
    if(a>='A' && a<='z')
    {
        printf("%c is Uppercase",a);
    }
    else
    {
    printf("%c is lowercase",a);
    }
    return 0;
}