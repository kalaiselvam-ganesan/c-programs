#include<stdio.h>

int main()
{
    int ar[100]={10,20,30,40,50};
    int item=30,i,j=0,n;
    printf("\n Enter the Value of N:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ar[%d]:%d\n",i,ar[i]);
    }
    while(j<n)
    {
        if(item==ar[j])
        {
            break;
        }
        j=j+1;
    }
    printf("\nElement %d Found at %d postion..",item,j+1);
    return 0;
}