#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter no. of array element"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(auto var:a)
        cout<<var;
}
