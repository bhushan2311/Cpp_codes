#include<iostream>
using namespace std;

template<typename T>

T swap(T n1,T n2)
{
    T temp;
    temp=n1;
    n1=n2;
    n2=temp;
    return temp;

}
int main()
{
    int a=1,b=2;

    cout<<"A="<<a;
    cout<<"\nB="<<b;

    swap<int>(1,2);

    cout<<"A="<<a;
    cout<<"\nB="<<b;

    return 0;
}
