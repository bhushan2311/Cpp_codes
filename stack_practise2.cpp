//without constructor


#include<iostream>
using namespace std;

class arr_stack
{
    int a[5],n=5;
    int top=-1;
    public:
    int push(int &val)
    {
        if(top!=n-1)
        {
             a[top++];
             a[top]=val;
             return val;
        }
        else
            cout<<"Stack Overflow";
            return 0;
    }

    int pop()
    {
        int val;
        if(top!=-1)
        {
            val=a[top];
            a[top--];
        }
        else
            cout<<"Stack Underflow";
            return 0;
    }

    void show()
    {
        for(int i=top;i>-1;i--)
            cout<<" "<<a[i];
    }
};

int main()
{
   int ch,val;
   arr_stack s;
   while(1)
   {
       cout<<"\n\n1.Push\n2.Show\n3.Pop\n4.exit";
       cout<<"\nEnter Choice";
       cin>>ch;
       switch(ch)
       {
       case 1:
        cout<<"\nEnter no.";
        cin>>val;
        s.push(val);
        break;
       case 2:
           s.show();
           break;
       case 3:
           s.pop();
           break;
       case 4:
           exit(0);
           break;

       default :
        cout<<"\nInvalid Choice";
       }
   }
}
