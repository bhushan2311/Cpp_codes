#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,n,a[50];
    cout<<"Enter Array Elements:"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];

    }

    cout<<"Addition is:"<<sum;

    return 0;
}
