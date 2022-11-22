#include<stdio.h>

// error 
// structure tag is missing in the syntax of the program 
struct {
        int k;
        char c;
    };
    
int main()
{
    // invalid struct variable declaration
    struct p;
    // Undeclared Error
    p.k=10;
    printf("%d",p.k);
}