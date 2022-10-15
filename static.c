#include <stdio.h> 

void next(void);
static int count = 7; 

int main() 
{
    while(count<10) 
    {
    next();
    count++;   
    }
    return 0;
}


void next( void ) 
{    
   static int iteration = 13; 
   iteration ++;
   printf("iteration=%d and count= %d\n", iteration, count);
}