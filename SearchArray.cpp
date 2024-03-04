#include <iostream>
using namespace std;
int main()
{
    int siz,searched,c;
    cout<<"Enter array size:"<<endl;
    cin>>siz;
    int arr[siz];
    cout<<"Enter array Elements:"<<endl;
    for(int i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter Element to be search:"<<endl;
    cin>>searched;
    for( c=0;c<siz;c++)
    {
        if(arr[c]==searched)
        {
            cout<<"Searched Element is at:"<<c+1;
            break;
        }
    }
    if(arr[c]!=searched)
        {
            cout<<"Element "<<searched<<" is not present...";
        }
        return 0;
}
