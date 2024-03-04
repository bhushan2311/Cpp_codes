#include <iostream>
using namespace std;

class rectangle
{
    public:
        int l,b;
    void getdata()
    {
        cout<<"Enter Length and Breadth respectively:"<<endl;
        cin>>l>>b;
    }
};

class area : public rectangle
{
public:
    int res;
    int result()
    {
        return l*b;
        //cout<<"Area of rectangle is : "<<res;
    }
};

int main()
{
    area a;
    a.getdata();
    cout<<a.result();
}
