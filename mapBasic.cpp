#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>student;

    student["Nutan"]=99;
    student["Aman"]=88;
    student["Nalini"]=100;
    student["Sneha"]=87;
    student["Raju"]=101;
    /*map<string,int>::iterator i=student.begin();
    while(i!=student.end())
    {
        cout<<i->first<<endl;        //output will be in sorted order
        i++;
    }*/

    //using for loop
    for(auto p=student.begin();p!=student.end();p++)
    {
        cout<<p->first<<endl;
    }

     /*for(auto &var:student)
    {
        cout<<var.first<<endl;
    }*/

    /*cout<<student["Sneha"]<<endl;
    cout<<student.size()<<endl;*/



}
