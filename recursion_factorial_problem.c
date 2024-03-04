#include<stdio.h>

int fact(int i)
{
    int a;
    if(i==1)
    {
        return 1;
    }
    else
    {
        a=i*fact(i-1);
        return a;
    }
}

int main()
{
    int k,val;
    printf("Enter the no.");
    scanf("%d",&val);
    k=fact(val);
    printf("the factorial is %d ",k);
}
