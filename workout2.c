#include<stdio.h>

struct {
        int k;
        char c;
}p;
// same variablle declaration Error
int p=10;
int g=10;
int main()
{
    p.k=10;
    printf("%d %d",p.k,g);
    return 0;
}

/* Output:

10 10 */