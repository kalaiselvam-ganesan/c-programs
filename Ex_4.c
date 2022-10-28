#include <stdio.h>

int main()
{
    int a, n, Num;

    // Getting input from the user //
    printf("Enter the value of A: ");
    scanf("%d", &a);
    // Getting input from the user for nth position //
    printf("Enter the value of Nth: ");
    scanf("%d", &n);
    // Left shift 1, n times and perform bitwise OR with a //
    Num = (1 << n) | a;
    printf("Number before set %d bit: %d\n", n, a);
    printf("Number after set %d bit: %d\n", n, Num);
    return 0;
}