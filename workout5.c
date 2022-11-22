#include<stdio.h>

//  in stucture tag and global variable can be same name of declartion
struct p{
        int k;
        char c;
        float f;
};
// global variable can be same as struct tag.
int p=10;
int main()
{
    struct p x={1,97};
    printf("%d %d",x.f,p);
}

/* output

10  garbage value*/ 