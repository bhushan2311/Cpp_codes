#include <iostream>
using namespace std;

int main()
{
    int a[5],maxi,mini;
    cout<<"Enter any 5 numeric Elements"<<endl;
    for(int i=0;i<5;i++)
    {
       cin>>a[i];
    }
    mini=maxi=a[0];

    for(int i=1;i<5;i++)
    {
        if(a[i]>maxi)
       {
          maxi=a[i];
       }
       if(a[i]<mini)
       {
           mini=a[i];
       }
    }
     cout<<"Maximum Element is "<<maxi;
     cout<<"\nMinimum Element is "<<mini;

     return 0;
}
