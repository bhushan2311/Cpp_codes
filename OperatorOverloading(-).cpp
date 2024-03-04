#include<iostream>
using namespace std;

class complex
{
    int a,b;
public:
    //void get(int x ,int y)
    void get()
    {
        cout<<"\nEnter two no.";
        cin>>a>>b;
        //a=x;
        //b=y;
    };
    void show()
    {
        cout<<"\na="<<a<<"\n b="<<b;
    }
    //complex operator -(complex c)
    complex operator -()
    {
        complex temp;
        temp.a=-a;
        //temp.a=-c.a;
       temp.b=-b;
        return temp;
    }

};
 int main()
 {
     complex c1,c2;
     //c1.get(2,3);
     //c2=c1.operator -(c1);
     c1.get();
     c2=-c1;
     c1.show();
     c2.show();
 }
