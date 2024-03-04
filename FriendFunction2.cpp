#include<iostream>
using namespace std;

class B;
class A
{
    int a;
public:
    void get(int x)
    {
        a=x;
    }
    friend void add(A,B);
};

class B
{
    int b;
public :
    void get(int y)
    {
        b=y;
    }
   friend void add(A,B);
};

void add(A obj1,B obj2)
{
    cout<<obj1.a+obj2.b;
}

int main()
{
    A o1;
    B o2;
    o1.get(2);
    o2.get(3);
    add(o1,o2);
}
