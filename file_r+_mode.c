#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp=NULL;
    //char str[100];
    fp=fopen("sample.txt","r+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }

    fputs("selvam",fp);
    fputc('G',fp);
    fclose(fp);
}