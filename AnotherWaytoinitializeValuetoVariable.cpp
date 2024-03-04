#include<iostream>
using namespace std;
/*class data
{
    int a;

    public:

        data():a(10){}
        void show()
        {
            cout<<a;
        }
};
int main()
{
    data d;
    d.show();
    return 0;
}

//default constructor
class data
{
    int a,b;
public:
    data()
    {
        a=10;
        b=20;
    }
    void show()
    {
        cout<<a<<b<<endl;
    }
};
int main()
{
    data d;
    d.show();
}*/

//paramaterised constructor

class data1
{
    int a,b;
public:
    data1(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {

        cout<<a<<b;
    }
};
int main()
{
    data1 d(30,40);
    d.show();

}

