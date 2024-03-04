#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    ifstream ipfile;
    ipfile.open("example.txt");
    int x;
    ipfile>>x;
    cout<<"x="<<x;
    ipfile.close();
    return 0;
}
