 #include <stdio.h>
    
enum birds {SPARROW, PEACOCK, PARROT};
enum animals {TIGER = 8, LION=100, RABBIT, ZEBRA};
    
int main()
{
    enum birds m = RABBIT;
    int k;
    k = m;
    printf("%d\n", k);
    return 0;
}


#include <stdio.h>

int const print()
{
    printf("Sanfoundry.com");
    return 0;
}

void main()
{
    print();
}



#include <stdio.h>
    
int main()
{
    for (int k = 0; k < 10; k++);
    return 0;
}


#include <stdio.h>
    
void main()
{
    int x = 5 * 9 / 3 + 9;
    printf("x : %d",x);
}


