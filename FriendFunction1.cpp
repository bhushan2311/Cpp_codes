#include<iostream>
using namespace std;

class A;

class B
{
    int b;
    public:
        friend int add(A clasA,B clasB);
        void show(int b1)
        {
          b1=b;
        }
};

class A
{
    int a;
    public:
        void show(int a1)
        {
            a1=a;
        }
        friend int add(A clasA,B clasB);

};

int add(A clasA,B clasB)
{
    return (clasA.a+clasB.b);
}

int main()
{
    B clasB;
    clasB.show(12);
    A clasA;
    clasA.show(1);
    cout<<add(clasB,clasA);

    return 0;
}
