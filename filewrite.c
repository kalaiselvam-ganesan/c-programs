#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE *fp=NULL;

    char ch[100];
    int i;

    fp=fopen("sample.txt","w");

    /*if(fp==NULL)
    {
        printf("error");
        exit(1);
    }*/
    printf("Enter the value:");
    gets(ch);
    printf("%s",ch);
    for(i=0;i<=strlen(ch);i++)
    {
    fputc(ch[i],fp);
    }
    fclose(fp);
}