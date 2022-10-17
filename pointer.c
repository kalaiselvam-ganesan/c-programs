#include<stdio.h>

int main()
{
    int a=10;
    int *ptr=NULL;
    ptr=&a;
    if(ptr==NULL)
    {
        printf("\n 0 ");
    }
    else
    {
        printf("\n error");
    }
    printf("\n %d",a);
    printf("\n %d",ptr);
    printf("\n %d",*ptr);

}