#include<iostream>
using namespace std;
/*
void fun()
{
    int x=10;
    cout<<x<<endl;
    x++;
    cout<<x<<endl;
}
int main()
{
    fun();
    fun();
    fun();
}
*/
void fun()
{
    static int x=10;         // static local variable          ... it by default get zero if it not assigned to any value
    cout<<x<<endl;                    //for 1st fun 10... for 2nd fun 11... for 3rd 12
    x++;                              //increases to 11... then 12...      & 13
    cout<<x<<endl;                    //for first fun 11... 2nd 12      ... for 3rd 13
}
int main()
{
    fun();
    fun();
    fun();
}
