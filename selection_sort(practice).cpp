#include<iostream>
using namespace std;

int main()
{
    int a[]={2,5,3,8,1,0,4};
    int n=7,temp,loc,mini;
    for(int i=0;i<n-1;i++)
    {
        mini=a[i];
        loc=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<mini)
          {
            mini=a[j];
            loc=j;
          }
          temp=a[i];
          a[i]=a[loc];
          a[loc]=temp;
    }
    for(int i=0;i<n;i++)
        cout<<a[i];
}
