#include<stdio.h>
#include<string.h>

int revstr(char ar[100]);

int main()
{
    char a[100];
    printf("\n Ennter the string:");
    scanf("%s",a);
    revstr(a);
    printf("\n Reverse a string:%s",a);    
    return 0;
}

int revstr(char ar[100])
{
    int i,len,temp;
    len=strlen(ar);
    for(i=0;i<len/2;i++)
    {
        temp=ar[i];
        ar[i]=ar[len-i-1];
        ar[len-i-1]=temp;
    }
}
