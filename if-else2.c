#include <stdio.h>

void main()
{
   int tmp;
   // Getting input from the user
   printf("Input days temperature : ");
   scanf("%d",&tmp);
   //  Checking the condition of if-else
   if(tmp<0)
   {
        printf("Freezing weather.\n");
   }
   else if(tmp<10)
    {
        printf("Very cold weather.\n");
    }
    else if(tmp<20)
    {
        printf("Cold weather.\n");
    }
    else if(tmp<30)
    {
        printf("Normal in temp.\n");
    }
    else if(tmp<40)
    {
        printf("Its Hot.\n");
    }
    else
    {
        printf("Its very hot.\n");
    }
    return 0;
}