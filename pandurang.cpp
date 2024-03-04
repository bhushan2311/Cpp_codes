#include <iostream>
using namespace std;
class area
{
public :
      int a;
    void sq_area(int length)
    {
        a=length*length;
    }
};
class perimeter
{
public :
    int b;
    void sq_per(int len)
    {
        b=4*len;
    }
};
class mix:public area,public perimeter
{
public:
    void show()
    {
        cout<<"area:"<<a;
        cout<<"\nPerimeter:"<<b;
    }
};
int main()
{
    int l;
    cout<<"Enter Length:";
    cin>>l;
    mix m;
    m.sq_area(l);
    m.sq_per(l);
     m.show();
}

