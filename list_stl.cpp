#include<iostream>
#include<list>
using namespace std;

int main()
{
    int n;
    list < int > arr[n];
   // cout<<arr.at(0);                           //did not work
   cout<<"enter array element"<<endl;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }

    list<int>::iterator p;
    p=arr.begin();
    while(p!=arr.end())
    {
        cout<<" "<<*p;
        p++;
    }
    cout<<endl;

   // arr.sort();
    /*for(auto var:arr)
        cout<<" "<<var;*/
   // for(p=arr.begin(); p!=arr.end(); p++)
    //    cout<<" "<<*p;

    // arr.push_front(11);
     //arr.pop_front();

    // arr.push_back(10);
     //arr.pop_back();
     //arr.reverse();
     //arr.remove(92);
    // arr.clear();
     for(p=arr.begin(); p!=arr.end(); p++)
        cout<<" "<<*p;




}
