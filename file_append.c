#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp=NULL;
    char ch[30];
    fp=fopen("sample.txt","a");
    if(fp==NULL)
    {
        printf("No file");
        exit(1);
    }
    printf("\n Enter the String to append:");
    gets(ch);
    
    fputs(ch,fp);
    printf("successfully append");
    fclose(fp);
}