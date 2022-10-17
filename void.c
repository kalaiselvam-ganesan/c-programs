#include<stdio.h>

int main()
{
    int a=10;
    void *ptr;
    ptr=&a;
    printf("\n %d",a );
    printf("\n %d",*(int*)ptr);
    return 0;
}