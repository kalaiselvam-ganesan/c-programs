// Problem 15
#include<stdio.h>

int main()
{
  int x, y;
  x = 5;
  y = x++ / 2;
  printf("%d", y);
  return 0;
}



// Problem 16
#include<stdio.h>
int main()

{
  int a=3, b=9;
// Error is occur
// We can not give direct increment or decrement to the constant Expression
  printf("%d ", ++(a*b+1));
  return 0;
}
