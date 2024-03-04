#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("data.w");
    fout<<"Hello";
    fout.close();
}
