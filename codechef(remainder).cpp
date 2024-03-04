#include<iostream>
using namespace std;

/*int main()
{

    int a,b,T;
    cin>>T;
    while(T--)
    {
        cin>>a>>b;
        cout<<a%b<<endl;
    }
    return 0;
}*/
int rem()
{
    int a,b,s;
    cin>>a>>b;
    s=a%b;
    return s;
}
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int r=rem();
        cout<<r<<endl;
    }
}
