#include<iostream>
using namespace std;

class area
{
    public:
    int base,height;
    void getdata(int b,int h)
    {
        base=b;
        height=h;
    }
    virtual int getans()=0;            //pure virtual function
    //virtual void getans()=0;            //pure virtual function

};

class rectangle : public area
{
public:
    /*void getans()
    {
        int c;
        c=height*base;
        cout<<c;
    }*/
    int getans()
    {
        return base*height;
    }
};

class triangle : public area
{
public:
    /*void getans()
    {
        int c;
        c=0.5*base*height;
        cout<<c;
    }*/
     int getans()
    {
        return 0.5*base*height;
    }
};

int main()
{
    rectangle r;
    triangle t;
    r.getdata(2,3);
    //r.getans();
    cout<<r.getans();
    t.getdata(1,2);
    //r.getans();
    cout<<t.getans();
}
