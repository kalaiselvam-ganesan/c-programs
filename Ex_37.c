#include<stdio.h>

int main()
{
    char a;
    // Getting input from the user
    printf("Enter the value of A:");
    scanf("%c",&a);
    // Checking the Switch condition
    switch(a)
    {
        case 'a': 
            printf("Vowels");
            break;
        case 'e': 
            printf("Vowels");
            break;
        case 'i': 
            printf("Vowels");
            break;
        case 'o': 
            printf("Vowels");
            break;
        case 'u': 
            printf("Vowels");
            break;
        case 'A': 
            printf("Vowels");
            break;
        case 'E': 
            printf("Vowels");
            break;
        case 'I': 
            printf("Vowels");
            break;
        case 'O': 
            printf("Vowels");
            break;
        case 'U': 
            printf("Vowels");
            break;
        default:
            printf("constant\n");
    }
    return 0;
}