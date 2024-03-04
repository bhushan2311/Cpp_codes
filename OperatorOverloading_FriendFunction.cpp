#include<iostream>
using namespace std;

class complex
{
    int a,b;
public:
    void get(int x,int y)
    {
        a=x;b=y;
    }
    void show()
    {
        cout<<a<<" "<<b;
    }
    //friend complex add(complex,complex);                //  when there is no operator overloading
    friend complex operator +(complex,complex);
};

  //complex add(complex X,complex Y)                      //  when there is no operator overloading
   complex operator +(complex X,complex Y)
  {
      complex temp;
      temp.a=X.a+Y.a;
      temp.b=X.b+Y.b;
      return temp;
  }
int main()
{
    complex c1,c2,c3;
    c1.get(1,2);
    c2.get(2,3);
    //c3=add(c1,c2);                                     //  when there is no operator overloading
    //c3=operator +(c1,c2);           //another way of calling
    c3=c1+c2;
    c3.show();
}
