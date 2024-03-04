#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch=' ';
    fstream fio;
    fio.open("File1.txt",ios::out|ios::in|ios::app);
    if(fio.is_open())
    {
        while(ch!='.')
        {
            cin>>ch;                  //read character from keyboard
            fio.put(ch);              //write char to file
        }
        fio.seekg(ios::beg);
        cout<<"\nfc\n";

        fio.get(ch);                //read first char

        while(!fio.eof())
        {
            cout<<ch;            //write char to screen
            fio.get(ch);         //read next char
            fio.close();
        }

    }
    else
        cout<<"invalid";
}
