#include <stdio.h>
#include <string.h>

void main()
{
    int a,phy,che,ca,total;
    float per;
    char b[20],div[10];
    // Getting input from the user
    printf("Roll Number of the student :");
    scanf("%d",&a);
    // Getting input from the user
    printf("Name of the Student :");
    scanf("%s",b);
    // Getting input from the user
    printf("The marks of Physics, Chemistry and Computer Application : ");
    scanf("%d%d%d",&phy,&che,&ca);
    total = phy+che+ca;
    per = total/3.0;
    if (per>=60)
    {
	    strcpy(div,"First");
    }
    else if (per<60&&per>=48)
    {
	    strcpy(div,"Second");
    }
	else if (per<48&&per>=36)
	{
		strcpy(div,"Pass");
	}
    else
    {
		strcpy(div,"Fail");
    }
       printf("\nRoll No : %d \n",a);
       printf( "Name of Student : %s\n",b);
       printf("Marks in Physics : %d \n",phy); 
       printf("Marks in Chemistry : %d\n",che);
       printf("Marks in Computer Application : %d\n",ca);
       printf("Total Marks = %d\n",total);
       printf("Percentage = %5.2f\n",per);
       printf("Division = %s\n",div);
}