#include <stdio.h>  
  
void  main()  
{  
    int arr[10]; 
    int i;  
    printf("\n Print elements of an array:\n");
    printf("Input elements in the array :\n");  
    for(i=0; i<10; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\nElements in array are: ");  
    
    for(i=0; i<10; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    printf("\n");	
}