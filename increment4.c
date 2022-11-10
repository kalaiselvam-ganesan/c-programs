// Problem 7
#include <stdio.h> 

int main()
{
    int d, a = 1, b = 2;
    // syntax error 
    d =  a++ +++b;
    printf("%d %d %d", d, a, b);
    return 0;
}


// Problem 8
#include <stdio.h>
 
int main()
{
    int i = 2;
    // redifinition Error
    // = is not sequence point
    int i = i++ + i;
    printf("%d\n", i);
    return 0;
}
