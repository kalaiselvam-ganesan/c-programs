#include<stdio.h>

int main()
{
    int a;
    // Getting input from the user
    printf("Enter the value of A:");
    scanf("%d",&a);
    // Checking the Switch condition
    switch(a)
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("saturday\n");
            break;
        case 7:
            printf("sunday\n");
            break;
        default:
            printf("Wrong choice..There is a no weekdays\n");
    }
    return 0;
}