#include<stdio.h>

int main()
{
    int a,b,c,amt;
    // Getting input from the user
    printf("\n Enter the Value of A:");
    scanf("%d",&a);
    // checking the condition of if-else
    if(a>=500)
    {
        b=a/500;
        a=a-b*500;
        printf("500:%d",b);
    }
    if(a>=100)
    {
        b=a/100;
        a=a-b*100;
        printf("\n100:%d",b);
    }
    if(a>=50)
    {
        b=a/50;
        a=a-b*50;
        printf("\n50:%d",b);
    }
    if(a>=20)
    {
        b=a/20;
        a=a-b*20;
        printf("\n20:%d",b);
    }
    if(a>=10)
    {
        b=a/10;
        a=a-b*10;
        printf("\n10:%d",b);
    }
    if(a>=5)
    {
        b=a/5;
        a=a-b*5;
        printf("\n5:%d",b);
    }
    if(a>=2)
    {
        b=a/2;
        a=a-b*2;
        printf("\n2:%d",b);
    }
    if(a>=1)
    {
        b=a/1;
        a=a-b*1;
        printf("\n1:%d",b);
    }
    return 0;
}