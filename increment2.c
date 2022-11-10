// Problem 3
#include <stdio.h>

int main()
{
    int a=5, b=-7,c=0,d;
    d = ++a && ++b || ++c;
    printf("\n%d%d%d%d",a,b,c,d);
    return 0;
}



// problem 4
#include <stdio.h>

int main()
{
    int i=2;
    int j = ++i + i;
    printf("%d\n",j);
    return 0;
}