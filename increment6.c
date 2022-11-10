// Problem 11
#include <stdio.h>
    
int main()
{
    int a = 1, b = 1, d = 1;
    printf("%d, %d, %d", ++a + ++a+a++, a++ + ++b, ++d + d++ + a++);
    return 0;    
}


// Problem 12
#include <stdio.h>
 
int main()
{
      int a=9, b=9;
      a=b++;
      b=a++;
      b=++b; 
      printf("%d %d",a,b);
      return 0;
}