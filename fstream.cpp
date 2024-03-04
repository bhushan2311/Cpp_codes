
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char data[50];

    fstream infile;
    infile.open("used getline");
    cout<<"writing to a file"<<endl;
    cout<<"Enter your full name:";
    cin.getline(data,50);
    infile<<data;

    cout<<"reading a file"<<"\n";
    infile>>data;
    cout<<data;
    infile.close();
}
