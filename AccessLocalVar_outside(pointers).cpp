#include<iostream>
using namespace std;
//int x=20;
int* fun()
{
    static int x=10;
    return x;
}

int main()
{
    int *p=fun();
    cout<<p;
    //cout<<::x;
}
