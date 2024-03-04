#include<stdio.h>

void search(int n)
{
    int a[]={23,45,12,3,5,44,55};
    int i,j,temp;

    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0 && temp<a[j];j--)                   //dont use braces for this for loop, it does not print desired output
            a[j+1]=a[j];
            a[j+1]=temp;
    }
    for(i=0;i<7;i++)
    {
        printf(" %d ",a[i]);
    }
}

int main()
{
    search(7);
}
