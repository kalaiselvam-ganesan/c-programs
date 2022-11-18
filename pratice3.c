#include <stdio.h>

void main()
{
    float x;
    int y;
    printf("enter two numbers \n", x);
    scanf("%f %f", &x, &y);
    printf("%f, %d", x, y);
}


#include <stdio.h>
    
int main()
{
    short int i = 20;
    char c = 97;
    printf("%d, %d, %d\n", sizeof(i), sizeof(c), sizeof(c + i));
    return 0;
}


#include <stdio.h>
    
int x = 0;

int main()
{
    int i = (f() + g()) | g(); //bitwise or
    int j = g() | (f() + g()); //bitwise or
}

int f()
{
    if (x == 0)
        return x + 1;
    else
        return x - 1;
}

int g()
{
    return x++;
}