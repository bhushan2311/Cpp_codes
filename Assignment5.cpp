#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char name[20];
    int rollno;

    ofstream outfile;
    outfile.open("Info");
    cout<<"Enter name"<<endl;
    cin>>name;
    cout<<"Enter Roll no."<<endl;
    cin>>rollno;
    outfile<<name<<endl;
    outfile<<rollno;
    outfile.close();

    ifstream infile;
    infile.open("info");
    infile>>name;
    infile>>rollno;
    cout<<name<<endl;
    cout<<rollno<<endl;
    infile.close();

    return 0;
}
