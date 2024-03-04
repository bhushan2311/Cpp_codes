#include<iostream>
using namespace std;

class complx
{
    int real,imag;
public:
    complx(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }
    friend ostream &operator <<(ostream &out,complx &c);
    friend istream &operator >>(istream &in,complx &c);
};

ostream &operator <<(ostream &out,complx &c)
{
    out<<c.real;
    out<<"+"<<c.imag<<"i";
    return out;  //not necessary
}

istream &operator >>(istream &in,complx &c)
{
    cout<<"Enter Real no.";
    in>>c.real;
    cout<<"Enter imaginary part";
    in>>c.imag;
    return in;  //not necessary
}

int main()
{
    complx c1;
    cin>>c1;
    cout<<c1;
   return 0;
}



