#include<stdio.h>
#include<stdlib.h>

enum gender{male=5, female, others};
enum direction{north=100, south=23, west, east};


int main()

{
    enum gender g;
    printf("%d\t %d\t %d\t\n",male,female,others);
    printf("\n%d\t %d\t %d\t %d\t\n",north,south,west,east);
    switch (1)
    {
    case 1:
        if(g==male)
        {
            printf("\n The discount is 25 percent /-");
        }
        break;
    case 2:
        if(g==female)
        {
            printf("\n The discount is 50 percent /-");
        }
        break;
    case 3:
        if(g==others)
        {
            printf("\n The discount is 60 percent /-");
        }
        break;
    
    default:
        exit;
        break;
    }
    return 0;
}