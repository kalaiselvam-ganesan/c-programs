#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,*ptr;
    printf("\n Enter the Values of N:");
    scanf("%d",&n);

    ptr=(int*)calloc(n,sizeof(int));

    /*printf("Enter the values:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }*/

    printf("\n Enter the values are:");

    for(i=0;i<n;i++)
    {
        printf("%d\n",*(ptr+i));
    }

    free(ptr);
}
