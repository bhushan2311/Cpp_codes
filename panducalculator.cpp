#include<iostream>
using namespace std;

template<typename T>
T operation()
{
    T num1,num2;
    cout<<"Enter any 2 numbers"<<endl;
    cin>>num1>>num2;

    cout<<"Addition is :"<<num1+num2;
    cout<<"\nSubtraction is :"<<num1-num2;
    cout<<"\nMultiplication is :"<<num1*num2;
    cout<<"\nDivision is :"<<(float)num1/num2;
}

int main()
{
    operation<int>();
    operation<float>();
    return 0;
}
