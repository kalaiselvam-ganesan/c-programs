// Problem 5
#include <stdio.h> 
    
int main()
{
    int d,a=1,b=2;
    d =  a++ + ++b;
    printf("%d %d %d",d,a,b);
    return 0;
}


// problem 6
#include <stdio.h>

int main()
{
    int i=0;
    int x=i++,y=++i;
    printf("%d % d\n",x,y);
    return 0;
}