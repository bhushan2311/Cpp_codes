#include <iostream>
using namespace std;

int main()
{
    int i,pos,arr[5];
    cout<<"Enter any 5 elements:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position of Element you wanna delete:"<<endl;
    cin>>pos;
    if(pos>10)
    {
        cout<<"Position out of range :("<<endl;
    }
    else
    {
        for(i=pos-1;i<5;i++)
        {
            arr[i]=arr[i+1];
        }
        cout<<"Array after Deletion of Element:"<<endl;
        for(i=0;i<4;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
