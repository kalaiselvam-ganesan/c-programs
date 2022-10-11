#include<stdio.h>

int main()
{
    char id[10];
    int wrk_hrs;
    int salary_per;
    float salary;
    printf("\n Enter the employee_id:");
    scanf("%s",&id);
    printf("\n Working Hours:");
    scanf("%d",&wrk_hrs);
    printf("\n Enter the salary_per_hours:");
    scanf("%d",&salary_per);
    salary=salary_per*wrk_hrs;
    printf("\n------------------------------");
    printf("\n Employee_ID:%d",id);
    printf("\n salary : u$ %.2lf",salary);
    return 0;
}