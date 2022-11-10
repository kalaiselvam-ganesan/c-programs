// Problem 17
#include<stdio.h>

int main()
{
  int a=10, b=10,c;
//   Error 
// invalid expression
  c= a+++++b;
  printf("%d %d %d",a,b,c);
  return 0;
}


// Problem 18
#include<stdio.h>

int main()
{
  int a=2,b=1,c=0;
//   Valid expression to solve the expression
  c = a +++ b;
  printf("%d %d %d",a,b,c);
  return 0;
}