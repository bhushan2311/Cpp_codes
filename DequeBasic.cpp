#include <iostream>
#include <deque>
#include <iterator>
using namespace std;
int main()
{
    deque<int>d1{12,24,36,48,60};
   /* d1.push_front(0);
    d1.pop_back();
    for(auto &var:d1)
   {
       cout<<var<<endl;                         //calling using for loop
   }*/
   deque<int>::iterator itr=d1.begin();
   d1.insert(itr+2,12);
   for(itr=d1.begin(); itr<d1.end(); itr++)
   {
       cout<<*itr<<" ";                         //calling using iterator
   }
   cout<<"\n       "<<"^inserted value";
      return 0;
}
