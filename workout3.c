#include<stdio.h>

int main()
{
    struct student{
        int no;
        char name[50];
    }s;
    // Undeclared error
    no=8;
    int no=8;
    //[or]
    s.no=8;
    printf("%d",no);
    printf("%d",s.no);
}