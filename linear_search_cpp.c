#include<iostream>
using namespace std;

int main()
{
    int a[]={1,3,5,7,9,90};
    int item,flag=1,n=6;
    cin>>item;
    for(int i=0;i<6;i++)
    {
        if(a[i]==item)
        {
            flag=0;
            cout<<"search successful";
        }
    }
    if(flag==1)
        cout<<"Search Unsuccessful";
}
