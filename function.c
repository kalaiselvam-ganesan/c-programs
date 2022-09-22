#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int i,j,count=0;
    printf("\n Enter the String A:");
    scanf("%s",a);
    printf("\n Enter the String B:");
    scanf("%s",b);
    /*i=strcasecmp(a,b);
    if(i==0)
    {
        printf("\n A:%s || B:%s are Equal",a,b);
    }
    else
    {
        printf("\n A:%s || b:%s Not Equal",a,b);
    }*/
    if(strlen(a)==strlen(b))
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]==b[i])
            {
                count++;
            }
            else
            {
                printf("\n A:%s || B:%s are Not Equal",a,b);
                break;
         
            }
        }
        if(count==strlen(a))
        {
            printf("\n A and B are Equal");
        }
    }else
    {
        printf("\n A:%s || B:%s are Not Equal",a,b);
        
    }

    return 0;
}
