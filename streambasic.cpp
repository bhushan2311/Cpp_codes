#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char name[10];
    int cost;

    ofstream opfile("Data");
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter Cost:";
    cin>>cost;


    ifstream ipfile("data");

    cout<<"\nenter name:"<<name;
    cout<<"\nenter cost:"<<cost;

    return 0;
}
