#include<stdio.h>

enum xenum{c,Gcc,java};

int main()
{
    enum xenum var;
    printf("%d",sizeof(var));
    return 0;
}

/*typedef enum{
    male,
    female
}gender;

int main()
{
    gender var=female;
    printf("%d",var);
    return 0;
}*/