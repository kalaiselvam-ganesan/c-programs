// Problem 9
#include <stdio.h>

int main()
{
    int a=1, b=1,c;
    c = a++ + b;
    printf("%d, %d",a,b);
    return 0;
}



// Problem 10
#include <stdio.h>
 
int main()
{
   int a=1,b=3;
   b= a++ + a++ + a++ + a++ + a++;
   printf("%d \n %d",a,b);
   return 0;
}