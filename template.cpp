#include<iostream>
using namespace std;

template <class T,class S>
T add(T num1,S num2)
{
    return num1+num2;
}
int main()
{
 int result1;
 float result2,r4;
 double result3;

 result1=add<int>(9,8);
 cout<<result1<<endl;

 result2=add<float>(9.8,8.9);
 cout<<result2<<endl;

 result3=add<double>(9.879,8.097);
 cout<<result3<<endl;

 r4=add<int,float>(9,9.8);
 cout<<r4;

}


