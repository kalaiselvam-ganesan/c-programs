#include <stdio.h>

int main() {
    int a[10],i,n;
    printf("\n Enter the value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n------------------\n");
    for(i=0;i<n;i++)
    {
    printf("\n %d",a[i]);
    }
    return 0;
}