#include<stdio.h>

// 1st Function declaration
int prime(int a);
// 2nd Function declaration
int amgstrong(int a);
// 3rd Function declaration
int perfect(int c);

int main()
{
    int a;
    // Getting input from the user
    printf("Enter the value of A:");
    scanf("%d",&a);
    // Function call
    prime(a);
    // Function call
    amgstrong(a);
    // Function call
    perfect(a);
    return 0;
}

// Function Definition
int prime(int a) // Foraml parameters
{
    int i,count=0;
    // checking the condition of if-else
    // whether number is prime or not
    if(a==0 || a==1)
    {
        printf("%d is Not prime Number\n",a);
    }
    else
    {
        for(i=1;i<=a;i++)
        {
            if(a%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d is prime number \n",a);
        }
        else
        {
            printf("%d is not prime number\n",a);
        }   
    }
}

// Function Definnition
int amgstrong(int b) //Formal parameter
{
    int amg=0,c;
    c=b;
    // checking the condition of do-while 
    // whether number is amgstrong or not
    do{
    int rem=0;
    rem=b%10;
    amg=amg+(rem*rem*rem);
    b=b/10;
    }while (b>0);
    //printf("%d amgstrong number\n",amg);
    // checking the condtion of if-else
    if(c==amg)
    {
        printf("%d is amgstrong\n",c);
    }
    else
    {
        printf("%d is not amgstrong Number\n",c);
    }
}

// Function Definition
int perfect(int a)
{
    int perfect=0,i;
    for(i=1;i<=a/2;i=i+1)
    {
        // checking the condition of if-else
        // whether number is perfect or not
        if(a%i==0)
        {
            perfect+=i;
        }
    }
    if(a==perfect)
    {
        printf("%d is perfect\n",a);
    }
    else
    {
        printf("%d  is not perfect\n",a);
    }
}