#include <stdio.h>

int main()
{
   if (sizeof(int) > -1)
       printf("True");
   else
       printf("False");
}


#include <stdio.h>

int main()
{
    char *p = "Kalai C-Test";
    p[0] = 'a';
    p[1] = 'b';
    printf("%s", p);
}


#include <stdio.h>

int main()
{
    float f = 0.1;
    if (f == 0.1)
        printf("True");
    else
        printf("False");
}


#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    if (n > 0)
        if (m > 0)
            printf("True");
    else 
        printf("False");
}