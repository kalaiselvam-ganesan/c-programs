#include <stdio.h>
#include <string.h>
 
union Data {
   int i;
   float f;
   char str[20];
};
 
int main( ) {

   union Data kalai;        

   kalai.i = 10;
   kalai.f = 220.5;
   strcpy( kalai.str, "C Programming");

   printf("\n %d %f %s",kalai.i,kalai.f,kalai.str);
   
   /* accessing the member */
   printf( "data.i : %d\n", kalai.i);
   printf( "data.f : %f\n", kalai.f);
   printf( "data.str : %s\n", kalai.str);

   return 0;
}