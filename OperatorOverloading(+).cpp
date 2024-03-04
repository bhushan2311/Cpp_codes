//plus(+) operator Overloaded to add two non-primitive operands or Complex no.

#include<iostream>
using namespace std;

class complex
{
    int a,b,w;
public:
    void get()
    {
       // a=x;
        //b=y;
        cout<<"\nEnter a and b part of complex no. a+bi"<<endl;
        cin>>a>>b;

        cout<<a<<"+"<<b<<"i";
    }
    void show()
    {
        cout<<"\naddition is "<<a<<"+"<<b<<"i";
        //c=a+b;                          //operands are of primitive type
       // cout<<c;
    }

   //complex sum(complex c,complex q)        //  if there is no Op.Ov
    complex operator +(complex c)
    {
        complex temp;
        temp.a = a+c.a;            //a = a of c1,,,, c.a = a of c2  stored in a of temp
        temp.b = b+c.b;      // similarly for b
        return temp;
    }

};

int main()
{
    complex c1,c2,c3;
    c1.get();
    c2.get();
    //c1.get(1,3);
  //  c2.get(2,1);
   // c3=c1.operator +(c2);     can also used
   // c3=c1.sum(c2);          if operator overloading is not there
    //c3=c1.sum(c1,c2);
    c3=c1+c2;              //operands are of non primitive type
    c3.show();
}
