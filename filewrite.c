#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp=NULL;

    char ch='s';

    fp=fopen("sample.txt","W");

    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }

    fputc(ch,fp);

    fclose(fp);
}