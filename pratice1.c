#include <stdio.h>

int main()
{
    int y = 10000;
    int y = 34;
    printf("Hello World! %d\n", y);
    return 0;
}


#include <stdio.h>
    
int main()
{
    int main = 3;
    printf("%d", main);
    return 0;
}


#include  <stdio.h>

int main()
{
    signed char chr;
    chr = 128;
    printf("%d\n", chr);
    return 0;
}



#include <stdio.h>

union Sti
{
    int nu;
    char m;
};

int main()
{
    union Sti s;
    printf("%d", sizeof(s));
    return 0;
}



