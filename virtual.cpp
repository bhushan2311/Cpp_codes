#include<iostream>
using namespace std;

class base
{
    public:
      void show()
        {
            cout<<"base class";
        }
      void print()
        {
            cout<<"\nprinted base class";
        }
};
class derived : public base
{
    public:
        void show()
        {
           cout<<"derived class";
        }
        void print()
        {
            cout<<"\nprinted derived class";
        }
};
int main()
{
    derived d;
    base *ptr;o
    ptr=&d;
    ptr->show();              //called by base pointer,it print base if no virtual
    ptr->print();
   // base *ptr=new derived;
   // ptr->show();
   // ptr->print();
  /* base *d;
   derived o;
   d=&o;
   d->show();
   o.print();*/


    return 0;
}



