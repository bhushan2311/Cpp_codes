#include<iostream>
using namespace std;
/*
class retun
{
    int x=10;
    public:

    int show()
    {

      return x;
    }

};

int main()
{
    retun r1;
    cout<<r1.show();                     //output 10
}
*/

class retun
{
public:
    int x=10;
    int get()
    {
    return x;
    }
};

class retu:public retun
{
    public:
    int show()
    {
        return retun::get();
    }
};
 int main()
 {
     retu r1;
     r1.get();
     cout<<r1.show();
 }
