#include <iostream>
using namespace std;

int large(int a,int b)
{
    return(a>b)? a:b;
}
float large(float a,float b)
{
    return(a>b)? a:b;
}

int main()
{
    cout<<large(6,7)<<endl;
    cout<<large(1.2,1.3);
}
