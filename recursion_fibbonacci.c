#include <stdio.h>

int fib(int i);

int main()
{
    int t,i;
    t=fib(10);
    /*for(int i=1;i<=10;i++)
    printf("%d ",fib(i));*/
    printf("%d ",fib(10));
    return 0;
}

int fib(int i)
{
    int k;
    if(i==1||i==2)
        return 1;
    else
    {
        k=fib(i-1)+fib(i-2);
        return k;
    }
}
