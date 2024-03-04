#include<iostream>
#include<map>                  //associative array
#include<algorithm>
using namespace std;

int main()
{
    map<string,int>student;//{{"raju",89},{"xavier",72},{"bhuvi",72},{"aman",72},{"anil",75}};

    student["raju"]=89;
    student["xavier"]=72;
    student["bhuvi"]=99;
    student["aman"]=67;
    student["anil"]=75;

    map<string,int>::iterator s=student.begin();
    /*while(s!=student.end())
    {
        cout<<s->first<<" "<<s->second<<endl;               //arrange in sorted key(index) order
        s++;
    }*/
    cout<<student.at("anil");
    cout<<endl;
    student.insert(pair<string,int>("yogi",91));             //it ignores this if upper while loop will run
    while(s!=student.end())
    {
        cout<<s->first<<" "<<s->second<<endl;               //arrange in sorted key(index) order
        s++;
    }

}
