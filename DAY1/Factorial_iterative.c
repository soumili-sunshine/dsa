/*Factorial - Iterative*/
#include<stdio.h>
int fact(int n)
{
    int result =1;
    for(int i=1; I<=n;i++)
    {
        result *=i;
    }
    return result;
}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("factorial of %d is %d\n",n,fact(n));
    return 0;
}