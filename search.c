#include<stdio.h>

int main()
{
    int a[5]={10,20,30,40,50};
    int item=30,i,j;
    printf("\n Before searching:");
    for(i=0;i<5;i++)
    {
        printf("ar[%d]:%d\n",i,ar[i]);
    }
    while(j<5)
    {
        if(item==a[i])
        {
            break;
        }
    }
    j++;
    printf("Element %d is Found at %d postion:",item,j+1);
    return 0;
}