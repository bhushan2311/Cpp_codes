#include<iostream>
using namespace std;

class unary
{
    int a,b;
public:
    void get(int x,int y){a=x;b=y;}
    void show()
    {
        cout<<a<<b;
    }
    //friend unary minu(unary);            //without operator overloading
    friend unary operator -(unary);
};
//unary minu(unary u)                     //without operator overloading
unary operator -(unary u)
{
    unary temp;
    temp.a=-u.a;
    temp.b=-u.b;
    return temp;
}

int main()
{
    unary c1,c2;
    c1.get(1,2);
    //c2=minu(c1);         //without operator overloading
    c2=-c1;
    //c2=operator -(c1);      //can also used in op.ov.
    c2.show();
}
