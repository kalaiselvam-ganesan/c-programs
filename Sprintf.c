#include <stdio.h>

int main()
{
    int a = 10, b = 20, c;
    c = a + b;
    printf("a:%d  b:%d\n",a,b);
    char str[50];
    // Store the sum of a,b and c in str
    sprintf(str,"Sum of %d and %d is %d", a, b, c);
    printf("%s",str);
    return 0;
}