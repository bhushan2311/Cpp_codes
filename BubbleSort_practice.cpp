#include<iostream>
using namespace std;

int main()
{
    int a[]={3,2,4,8,5,21,10,23,54,0};
    int n=10,t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
            if(a[j]<a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
    }
    for(int i=0;i<n;i++)
        cout<<a[i];
}
