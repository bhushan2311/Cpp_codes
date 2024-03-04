#include<iostream>
using namespace std;

template<class t,class s>
t add(t a,s b)
{
    cout<<a+b<<endl;
    //return a+b;
}
int main()
{
    add<int>(4,2);
    add<int,float>(2,2.2);
    //cout<<add<int>(4,2);                     //output 6
    //cout<<add<int,float>(2,2.2);           //output 4 if return the function
    return 0;
}
