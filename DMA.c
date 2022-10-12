#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,*ptr;
    printf("\n Enter the VAlue  of N:");
    scanf("%d",&n);

    ptr=(int*)calloc(n,sizeof(int));

    printf("\n Enter the Values:");

    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }

    printf("\n Enter the Values:");

    for(i=0;i<n;i++)
    {
        printf("%d",*(ptr+i));
    }

    free(ptr);

    float *pt;

    printf("\n Enter the value of N:");
    scanf("%d",&n);

    pt=(float*)malloc(n*sizeof(float));

    printf("\n Enter the values:");

    for(i=0;i<n;i++)
    {
        scanf("%f",pt+i);
    }

    printf("\n Enter the values are:");

    for(i=0;i<n;i++)
    {
        printf("%f\n",*(pt+i));
    }
    
    free(pt);

}