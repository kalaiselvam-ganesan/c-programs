#include<stdio.h>
#include<stdlib.h>


void main()
{
   FILE *fp=NULL;
   char d;
   char str[10];
   fp=fopen("sample.txt","r");
   if(fp==NULL)
   {
        printf("Error");
        exit(1);
   }
   
   fgets(str,5,fp);
   printf("%s\n",str);

   /*while (!feof(fp))
   {
   d=fgetc(fp);
   printf("%c\n",d);
   }*/
   fclose(fp);
}