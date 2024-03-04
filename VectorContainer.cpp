#include<iostream>
#include<vector>
using namespace std;
int main()
{
    /*vector<int>v1;
    cout<<v1.capacity();

    vector<int>v2{1,3,5,7,9};
    v2.push_back(11);         //push back          //op(capacity) is 10 bcoz it doubles the size of v2
    cout<<v2.capacity()<<endl;*/

   /* vector<char>v3(5,'a');
    cout<<v3.capacity()<<endl;
    for(int i=0;i<5;i++)
    {
      cout<<v3[i]<<endl;                   //aaaaa
    }
    for(int i=0;i<7;i++)
    {
      cout<<v3[i];                      //aaaaa
    }*/

   /* vector<int>v4{1,2,4};
    for(int i=0;i<10;i++)
    {
        cout<<v4[2]<<endl;   //4444444444
    }*/

    vector<int>v5;
    for(int i=0;i<4;i++)
    {
        v5.push_back(10*(i+1));  // push back
        cout<<v5[i]<<endl;
    }
   // cout<<v5.capacity()<<endl;    //capacity is 4
    //cout<<v5.size()<<endl;                 //size is 4
    v5.pop_back();                 //pop back
    //cout<<v5.capacity()<<endl;               //capacity remains same after pop back i.e 4
    cout<<v5.size();               //size is 3 after pop back

    cout<<v5.back();                // output is 30 if pop_back is used
}


