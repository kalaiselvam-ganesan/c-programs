// Problem 1
#include <stdio.h>

int main()
{
    int x = 4, y, z;
    y = --x;
    z = x--;
    printf("%d%d%d", x,  y, z);
    return 0;
}


// problem 2
#include <stdio.h>

int main()
{
    int i = 0;
    int j = i++ + i;
    printf("%d\n", j);
    return 0;
}