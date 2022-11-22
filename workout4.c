#include<stdio.h>

// in stucture tag and global variable can be same name of declartion
struct p{
        int k;
        char c;
};
// global variable can be same as struct tag.
int p=10;
int main()
{
    struct p x;
    x.k=10;
    printf("%d %d",x.k,p);
}


/* Output

10 10*/