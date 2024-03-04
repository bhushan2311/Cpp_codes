#include <iostream>
using namespace std;

int main()
{
    /*int n,a[32];
    int i=0;
    cout<<"Enter any decimal no."<<endl;
    cin>>n;
    while(n>0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<a[j];
    }

    int n,a[32];
    int i=0;
    cout<<"Enter any decimal no."<<endl;
    cin>>n;
    while(n>0)
    {
        a[i]=n%8;
        n=n/8;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<a[j];
    }

    int n,a[32];
    int i=0;
    cout<<"Enter any decimal no."<<endl;
    cin>>n;
    while(n>0)
    {
        a[i]=n%16;
        n=n/16;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<a[j];
    }*/

    int n,rem,var;
    int i=0;
    int bin=1;
    var=n;
    while(n>0)
    {
        rem=n%2;
        bin=bin+(rem*i);
        i=i*10;
    }
     cout<<bin;

}
