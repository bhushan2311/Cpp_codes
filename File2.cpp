#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fio;
    fio.open("File2.txt",ios::out);
    fio<<"Hello";                     //write string to file
    fio.close();

    string str;
    fio.open("File2.txt",ios::in);
    while(!fio.eof())
    {
        fio>>str;                    //read string
        cout<<str;                   //write string to screen
    }
    fio.close();
}
