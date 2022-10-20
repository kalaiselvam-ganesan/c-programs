#include<stdio.h>

int main()
{
    int ar[100]={11,22,33,44,55};
    int n=5,i,j,k=100;
    //printf("\nEnter the value of N:");
    //scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ar[%d]:%d\t\n",i,ar[i]);
    }
    
    j=k;

    while(j<n)
    {
        ar[j-1]=ar[j];
        j=j+1;
    }
    n=n-1;
    for(i=0;i<n;i++)
    {
        printf("\nar[%d]:%d\t",i,ar[i]);
    }
    return 0;
}