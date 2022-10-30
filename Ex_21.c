#include<stdio.h>

int main()
{
    char kalai,b;
    //Getting inpit from the user
    printf("\n Enter the Value of A:");
    scanf("%c",&kalai);
    // checking the condition of conditional operator
    b=(kalai>='a' && kalai<='z') || (kalai>='A' && kalai<='Z')?
    printf("\n It is a alphabet"):
    printf("\n It is not Alphabet");
    return 0;
}