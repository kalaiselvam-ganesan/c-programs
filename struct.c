#include<stdio.h>
#include<string.h>

//declaration of structure
struct Student{
    int roll_no;
    char name[20];
    float marks;
}s4={4,"ram",54.98};

/*struct student s2={2,"sam",78.0};
struct student s3={3,"que",67};*/


int main()
{
    struct Student s1;//={1,"kalai",89.67};
    
    s1.roll_no=1;
    strcpy(s1.name,"sam");
    s1.marks=89;
    
    printf("\n %d %s %0.2f",s1.roll_no,s1.name,s1.marks);
    //printf("\n %d %s %0.2f",s2.roll_no,s2.name,s2.marks);
    //printf("\n %d %s %0.2f",s3.roll_no,s3.name,s3.marks);
    printf("\n %d %s %0.2f",s4.roll_no,s4.name,s4.marks);
    
    //accessing the members
    printf("\n %s ",s1.name);
    printf("\n %f",s1.marks);
    
    /* size of memory allocation*/
    printf(" \n %d  ",sizeof(s1));
    return 0;
}