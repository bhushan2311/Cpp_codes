#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char name[10];
    int age,n;

    ofstream outfile("intro");
    cout<<"how many intros you want"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter name";
        cin>>name;
        cout<<"enter age";
        cin>>age;
        outfile<<name<<"\n";
        outfile<<age;
    }
    outfile.close();

    ifstream infile("Intro");
    for(int i=0;i<n;i++)
    {
        infile>>name;
        infile>>age;
        cout<<name<<endl;
        cout<<age<<endl;
    }
    infile.close();


    return 0;
}
