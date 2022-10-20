#include<stdio.h>

int main()
{
    int ar[10]={10,20,30,40,50};
    int item=60,pos=3,n,i;
    printf("\n Enter the value of N:");
    scanf("%d",&n);
    printf("\nBefore Update:");
    for(i=0;i<n;i++)
    {
        printf("ar[%d]:%d\n",i,ar[i]);
    }

    ar[pos-1]=item;
    printf("\n After Update:");
    for(i=0;i<n;i++)
    {
        printf("\n ar[%d]:%d",i,ar[i]);
    }
    return 0;
}