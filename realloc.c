#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,*ptr;
    
    printf("\n Enter the value of N;");
    scanf("%d",&n);

    ptr=(int*)calloc(n,sizeof(int));

    printf("\n Enter the Values:");

    for(i=0;i<n;i++)
    {
        canf("%d",ptr+i);;
    }

    printf("\n Enter the Updated size");
    scanf("%d",&n);

    int*ptr1=(int*)realloc(ptr,n*sizeof(int));

    printf("The previous address :%d and present Address  :%d",ptr,ptr1);
    printf("\n Enter the value:");

    for(i=0;i<n;i++)
    {
        printf("%d\n",ptr1+i);
    }

    free(ptr1);
}