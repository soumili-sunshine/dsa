#include<stdio.h>
int main(){
    int x = 10;
    int *p = &x;
    int **pp=&p;
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n",&x);
    printf("Value of p: %p\n", p);
    printf("Value of pp: %p\n", pp);
    printf("%d,%d,%d\n",x,*p,**pp);
    *p++;
    printf("After incrementing pointer p: %d,%d,%d\n",x,*p,**pp);
    **pp++;
    printf("After incrementing pointer pp: %d,%d,%d\n",x,*p,**pp);
    return 0;
}