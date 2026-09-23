#include<stdio.h>
int main()
{

    int x=10,y=15,tem;
    int *p,*q;
    p=&x;
    q=&y;
    tem=*p;
    *p=*q;

    // swiping.
    +
    q=tem;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    return 0;
}
