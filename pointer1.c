#include<stdio.h>

void swap(int *x,int *y);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
}

//jya variable(a,b) la adress(&) deto ty variable(a,b) la value assign kraichi , tevha pointer variable(x,y) tya variable(a,b) la access karto...

void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

