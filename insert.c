#include<stdio.h>

int main()
{
    int ar[20]={10,20,30,40,50};
    int i,pos,x,n;
    printf("\n Enter the value of N:");
    scanf("%d",&n);
    printf("\n Befor insertion of Element:");
    for(i=0;i<n;i++)
    {
        printf("ar[%d]:%d\t",i,ar[i]);
    }
    printf("\n");
    x=60;
    pos=4;
    n++;
    //printf("%d\n",n);
    for(i=n-1;i>=pos;i--)
    {
        ar[i]=ar[i-1];
        ar[pos-1]=x;
    }
    printf("\n After insertionn of Element:");
    for(i=0;i<n;i++)
    {
        printf("ar[%d]:%d\t",i,ar[i]);
    }
    printf("\n");
    return 0;
}