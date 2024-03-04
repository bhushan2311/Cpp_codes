#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,7>arr1={11,22,33,44,55,66};
    for(int i=0;i<6;i++)
    {
        cout<<endl<<arr1[i];
    }
/*
    array<int,10>arr1={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++)
    cout<<arr1[i]*10<<"\n";*/

    cout<<"\n"<<arr1.at(4)<<endl;
    cout<<arr1[4]<<endl;
    cout<<arr1.front()<<endl;
    cout<<arr1.back()<<endl;
    cout<<arr1.size()<<endl;
   // cout<<arr1.capacity();            //no member capacity
   //cout<<arr1.push_back();            //no member push and pop_back
}
