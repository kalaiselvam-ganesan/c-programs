#include<stdio.h>

int main()
{
    int a,n,c,d,e;
    // Getting input from the user 
    printf("\n Enter the value of A:");
    scanf("%d",&a);
    // Getting input from the user for Nth position
    printf("\n enter the value of Nth:");
    scanf("%d",&n);
    //left shift 1, n times and execute the condition of bitwise operator 
    c=1<<n;
    d=~c;
    e=a & d;
    printf("\n number Before clear %d : %d",n,a);
    printf("\n number after  clear %d : %d",n,e);
    return 0;   
}