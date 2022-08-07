#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10;
    int *a,**b;
    a=&x;
    b=&a;
    printf("\nValue of X is : %d",x);
    printf("\nValue of a is : %d",*a);
    printf("\nValue of b is : %d",**b);


    return 0;
}
