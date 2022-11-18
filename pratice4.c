#include <stdio.h>
    
int main()
{
    int i = 0;
    while (i < 3)
    i++;
    printf("In while loop\n");
}


#include <stdio.h>
    
int main()
{
    int i = 0;
    do
    {
        i++;
        if (i == 2)
            continue;
            printf("In while loop ");
    } while (i < 2);
    printf("%d\n", i);
}


#include <stdio.h>

int *p;

int main()
{
    int i = 0;
    p = &i;
    return 0;
}


#include <stdio.h>

int main()
{
    char *p = 0;
    *p = 'a';
    printf("value in pointer p is %c\n", *p);
}
