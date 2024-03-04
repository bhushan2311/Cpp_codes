#include<iostream>
using namespace std;

int main()
{
    int a[]={6,3,4,8,1,9};
    int temp,n=6,j;

    for(int i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(temp<a[j])
            {
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<" "<<a[i];
}
