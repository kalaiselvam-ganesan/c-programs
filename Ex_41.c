#include<stdio.h>

int main()
{
    int a,b,ch,c;
    int d,e,f;
    while(1)
    {
        // Display the operation 
        printf("1. Add\n");
        printf("2. sub\n");
        printf("3. multiply\n");
        printf("4. divide\n");
        printf("5. exit\n");
        // Getting the choice to the user
        printf("Enter the Choice:");
        scanf("%d",&ch);
        // Checking the switch condition
        switch(ch)
        {
            case 1:
                printf("Add");
                printf("\n Enter the value of A:");
                scanf("%d",&a);
                printf("\n Enter the Value of B:");
                scanf("%d",&b);
                c=a+b;
                printf(" Add : %d\n",c);
                break;
            case 2:
                printf("Sub");
                printf("\n Enter the value of A:");
                scanf("%d",&a);
                printf("\n Enter the Value of B:");
                scanf("%d",&b);
                d=a-b;
                printf("Sub : %d\n",d);
                break;
             case 3:
                printf("multiply");
                printf("\n Enter the value of A:");
                scanf("%d",&a);
                printf("\n Enter the Value of B:");
                scanf("%d",&b);
                e=a*b;
                printf("Multiply : %d\n",e);
                break;
             case 4:
                printf("Divide");
                printf("\n Enter the value of A:");
                scanf("%d",&a);
                printf("\n Enter the Value of B:");
                scanf("%d",&b);
                f=a/b;
                printf("Divide : %d\n",f);
                break;
            case 5:
                printf("Exit the Calculator");
                exit(0);
                break;
            default:
                printf("\nWrong chice...Give the Vaild choice\n");
                break;
        }
    }
    return 0;
}