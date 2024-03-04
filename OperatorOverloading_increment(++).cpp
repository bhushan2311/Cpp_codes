#include<iostream>
using namespace std;

class increment
{
    int x;
public:
    void get(int a){x=a;}
    void show(){cout<<x;}

    increment operator ++(int)     //post incrementation (necessary to give argument to differentiate)
    {
        increment temp;
        temp.x=x++;                //first x is stored in j
        return temp;
    }

    increment operator ++()        //pre incrementation
    {
        increment temp;
        temp.x=++x;                //incremented x stored in j
        return temp;
    }
};
 int main()
 {
     increment i,j;
     i.get(9);
     /* j=i++;
     //j=i.operator ++();        //alternate way of calling
     i.show();                //output will be 10 bcz i incremented first and incremented i stored in j           for i++
     j.show();                //output will be 9 bcz i stored in j first and it returns original value of i       for i++
     */
     j=++i;
     i.show();                //as usual output will be 10                      for ++i
     j.show();                //output will be 10                               for ++i
 }
