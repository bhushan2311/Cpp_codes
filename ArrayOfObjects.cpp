#include<iostream>
using namespace std;

class employee
{
    char name[20];
    int age;
    public:
        void getdata()
        {
            cout<<"Enter name ";
            cin>>name;
            cout<<"\nEnter Age";
            cin>>age;
        }
        void show()
        {
            cout<<"\nnName is "<<name;
            cout<<"\nAge is "<<age;
        }

};

int main()
{
    employee e[2];
    for(int i=0;i<2;i++)
    {
        e[i].getdata();
    }
    for(int i=0;i<2;i++)
    {
        e[i].show();
    }
}
