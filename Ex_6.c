#include<stdio.h>

int main()
{
    int a, n, Num;

    // Getting input from the user 
    printf("Enter the value of A: ");
    scanf("%d", &a);
    // Getting Input from the user for Nth position  
    printf("Enter the value of Nth: ");
    scanf("%d", &n);
    // Left shifts 1, n times and execute the condition of bitwise operator with a
    c=(1 << n);
    Num = a ^ c;
    printf("Number before toggle %d : %d (in decimal)\n", n, a);
    printf("Number after toggle %d : %d (in decimal)\n", n, Num);
    return 0;
}
