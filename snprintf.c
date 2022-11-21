#include <stdio.h>

int main()
{
    int a = 10,n;
    printf("Enter the value of N:");
    scanf("%d",&n);
    char name[20]="kalaiselvam";
    char str[50];
    // Store the sum of a,b and c in str
    snprintf(str,n,"%s %d",name,a);
    printf("%s",str);
    return 0;
}