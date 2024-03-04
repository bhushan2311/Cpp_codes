#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    char option;

    cout<<"Enter two INTEGER Numbers:"<<endl;
    cin>>num1>>num2;
    cout<<"what operation do you want to perform either add(+) or sub(-) or mul(*) or div(/)?"<<endl;
    cin>>option;

    switch(option)
    {
    case '+':
        cout<<"The Addition of "<<num1<<" + "<<num2<<" is: ";
        cout<<num1+num2;
        break;

        case '-':
        cout<<"The subtraction of "<<num1<<" - "<<num2<<" is: ";
        cout<<num1-num2;
        break;

        case '*':
        cout<<"The Multiplication of "<<num1<<" * "<<num2<<" is: ";
        cout<<num1*num2;
        break;

        case '/':
        cout<<"The division of "<<num1<<" / "<<num2<<" is: ";
        cout<<(float)num1/num2;
        break;
    }
}
