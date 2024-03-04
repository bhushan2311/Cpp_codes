#include<iostream>
using namespace std;

class person
{
public:
virtual   void fun()=0;
    void show()
    {
        cout<<"base";
    }
};

class student : public person
{
    public:
    void fun()
    {
        //cout<<"derived";
    }
};
int main()
{
    student s;
    //s.fun();
    s.show();
}
