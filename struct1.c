#include<stdio.h>
#include<string.h>

void main()
{
    struct employee
    {
        int id;
        float salary;
        int mobile;
    };
    struct employee e1,e2,e3;
    printf("\n Enter the Employee Details:")
    scanf("%d %f %d",&e1.id,&e1.salary,&e1.mobile);
    scanf("%d %f %d",&e2.id,&e2.salary,&e2.mobile);
    scanf("%d %f %d",&e3.id,&e3.salary,&e3.mobile);
    printf("\n The Result :");
    printf("Employee_1:%d %f %d",e1.id,e1.salary,e1.mobile);
    printf("Employee_2:%d %f %d",e2.id,e2.salary,e2.mobile);
    printf("Employee_3:%d %f %d",e3.id,e3.salary,e3.mobile);
    return 0;
}