#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int roll_no,mark;
    void getdata()
    {
    cout<<"Enter Name of Student : ";
    cin>>name;
    cout<<"\nEnter Roll no. : ";
    cin>>roll_no;
    cout<<"\nEnter Mathematics Marks out of 100 : ";
    cin>>mark;
    }

};
class result1:public student
{
public:
    int r1()
    {
        if(mark<45)
        cout<<"\n Result Fail!!";
        return -1;
    }
};
class result2:public student
{
public:

    void r2()
    {
    if(mark>45)
        cout<<"\n Result Pass!!";
        else
           cout<<"\n Result Fail!!";
    }
};
int main()
{
    result1 m;
    result2 r;
    r.getdata();
    r.r2();

}
