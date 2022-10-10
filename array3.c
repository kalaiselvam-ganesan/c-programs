#include <stdio.h>

void main()
{
   int i,n,a[100];
   
       printf("\n Display it in reverse order:\n");
   printf("Input the number of elements:");
   scanf("%d",&n);
   
   printf("Input %d elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf("element - %d : ",i);
	  scanf("%d",&a[i]);
	  }
      
   printf("\n Store into the array: \n");
   for(i=0;i<n;i++)
     {
	   printf("% 5d",a[i]);
	 }
 
   printf("\n\nThe array in reverse:\n");
   for(i=n-1;i>=0;i--)
      {
	   printf("% 5d",a[i]);
	  }
   printf("\n\n");
} 
