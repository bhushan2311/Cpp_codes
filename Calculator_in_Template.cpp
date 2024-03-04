#include<iostream>
using namespace std;

template<typename T>
T calculator()
{
    T num1,num2;
    char option;

    cout<<"\nEnter any two numbers for operation:"<<endl;
    cin>>num1>>num2;
    cout<<"\nEnter operator either from '+' or '-' or '/' or '*' : ";
    cin>>option;

    switch(option)
    {
    case '+':
        cout<<"The Addition of "<<num1<<" + "<<num2<<" is: ";
        cout<<num1+num2<<"\n\n";
        break;

        case '-':
        cout<<"The subtraction of "<<num1<<" - "<<num2<<" is: ";
        cout<<num1-num2<<"\n\n";
        break;

        case '*':
        cout<<"The Multiplication of "<<num1<<" * "<<num2<<" is: ";
        cout<<num1*num2<<"\n\n";
        break;

        case '/':
        cout<<"The division of "<<num1<<" / "<<num2<<" is: ";
        cout<<(float)num1/num2<<"\n\n";
        break;
    }

}

int main()
{
    cout<<"*************Operation for INTEGER data_type*************\n";
    calculator<int>();

    cout<<"*************Operation for FLOAT data_type***************\n";
    calculator<float>();

 return 0;
}
