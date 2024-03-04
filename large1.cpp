#include<iostream>
using namespace std;

template<typename T>
T large(T n1,T n2)
{
    return(n1>n2)? n1:n2;
}

int main()
{
    int a,b;
    float c,d;

    cout<<"enter two integers"<<endl;
    cin>>a>>b;
    cout<<"large no. is"<<large<int>(a,b)<<endl;

    cout<<"enter float no."<<endl;
    cin>>c>>d;
    cout<<"large no. is"<<large<float>(c,d)<<endl;
}
