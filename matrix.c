#include <stdio.h>

void main()
{
    int arr1[10][10],i,j,n;
    // Getting input from the user  
	printf("Input elements in the first matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
	       printf("element - [%d],[%d] : ",i,j);
	       scanf("%d",&arr1[i][j]);
        }
    }
    // Display the element  
	printf("The matrix is :\n");
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3 ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
    }
}