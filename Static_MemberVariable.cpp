#include<iostream>
using namespace std;
/*
class demo
{
public:
    int x=10;
    void show()
    {
        cout<<x;
        x++;
    }
    void sho()
    {
        cout<<x;
    }
};

int main()
{
    demo d,d1;
    d.show();        //10
   // d.show();      //11
    d1.show();       //10
    d.sho();      //11
}
*/

class demo
{
    static int x;
public:
    void show()
    {
        cout<<x<<endl;
        x++;
    }
};
int demo::x=10;

int main()
{
    demo d,d1,d2;
    d.show();
    d.show();   //x change
    d1.show();
    d2.show();
}
/*

class demo
{
     //int count=0;
     static int count;
public:
    void show()
    {
        cout<<"hello"<<endl;
        count++;
    }

    void show_count()
    {
        cout<<endl;
        cout<<"hello repeated "<<count<<" times :)"<<endl;
    }
};
int demo:: count;

int main()
{
    //using static member count will be shared by all the object created
    demo d,d1,d2,d3;
    d.show();
    d1.show();
    d2.show();
    d3.show();
    d.show_count();

    //without using static all functions are called by same object
    /*demo d,d1,d2,d3;          //output= output when static is used
    d.show();
    d.show();
    d.show();
    d.show();
    d.show_count();
    */



