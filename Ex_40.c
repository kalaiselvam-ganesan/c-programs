#include<stdio.h>

int main()
{
    int a;
    // Getting input from the user
    printf("Enter the value of A:");
    scanf("%d",&a);
    // Checking the Switch condition
    switch(a>0)
    {
        case 1:
            printf(" postive:%d\n",a);
            break;
        case 0:
            switch(a<0)
            {
                case 0:
                    printf("\n Zero:%d",a);
                    break;
                case 1:
                    printf("\n Negative:%d\n",a);
                    break;
            }
    }
    return 0;
}