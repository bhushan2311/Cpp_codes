#include<iostream>
using namespace std;

/*void get(int a,int b)
{
    cout<<"enter a "<<a<<endl;
    cout<<"enter b "<<b<<endl;
    cout<<"addition is "<<a+b<<endl;
}
void get2(int c,int d)
{
     /*cout<<"enter c "<<c<<endl;
    cout<<"enter d "<<d<<endl;
    cout<<"multiplication is "<<c*d<<endl;
}
void show(int x,int y)
{
    cout<<"Function only to show elements "<<x<<" "<<y;
}
int main()
{
    void (*ptr)(int ,int);
    ptr=&get;
    ptr(12,1);

    ptr=&get2;
    ptr(12,2);

    ptr=&show;
    ptr(12,3);
}*/

//Function pointer to class member function

class data
{
public:
    int fun(float)
    {
        return 10;
    }
};
int main()
{
    int (data::*ptr)(float);
    data ob;
    ptr=&data::fun;
    cout<<(ob.*ptr)(0);

}
