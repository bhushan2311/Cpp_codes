#include<iostream>
using namespace std;

/*
int main()
{
    int dividend,divisior,quotient,remainder;
    cout<<"Enter Dividend integer";
    cin>>dividend;
    cout<<"Enter divisior integer";
    cin>>divisior;

    try
    {
        if(divisior==0)
            throw divisior;
    }
    catch(...)
    {
        cout<<"\nDivisior is 0 ..Answer cant be calculated..";
    }
    quotient=dividend/divisior;
    cout<<"\nQuotient is: "<<quotient;
    remainder=dividend%divisior;
    cout<<"\nRemainder is: "<<remainder;

}
*/
// throw in function

int fun()
{
    int a;
    cout<<"\nEnter any integer to figure out whether it is even or odd";
    cin>>a;
    if(a%2!=0)
    throw a;

   // return a;
}
int main()
{
    int flag=0,a;

    try
    {
        fun();
    }
    catch(int x)
    {
        flag=1;
        cout<<x<<" no. is odd";
    }
    if(flag==0)
        cout<<"no is even";

}

