#include<iostream>
using namespace std;

int main()
{
    int a[]={2,9,3,6,1,8};
    int loc,min,n=6,t;
    for(int i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
               min=a[j];
               loc=j;
            }
        }
        t=a[i];
        a[i]=a[loc];
        a[loc]=t;
    }
    for(int i=0;i<n;i++)
        cout<<" "<<a[i];
}
