#include <stdio.h>

int sum(int i);

int main()
{
    int k,val;
    printf("Enter the no.you want sum upto:");
    scanf("%d",&val);
    k=sum(val);
    printf("The sum is %d",k);
}

int sum(int i)
{
    int s;
    if(i==1)
        return 1;
    else
    {
        s=i+sum(i-1);
        return s;
    }
}
