//constructor is used

#include<iostream>
using namespace std;

/*#define max 4
class stack
{
    int a[max];
    int top;
public:
    stack()
    {
        top=-1;
    }
    int isEmpty()
    {
        if(top==-1)
            return 1;
        else
            return 0;
    }
    int isFull()
    {
        if(top==max-1)
            return 1;
        else
            return 0;
    }
    int push(int p)
    {
        //int p;            //dont write compile time error
        if(!isFull())
        {
            top++;             //can also write a[top++]
            a[top]=p;                              //dont write top=p
           //cout<<"\nenter no. ";        //compile time Error
           // cin>>p;
            return p;
        }
        else
        {
            cout<<"\nDue stack noverflow "<<p<<" can't be consider";
        }
        return 0;
    }
    int pop()
    {
        int item;
        if(!isEmpty())
        {
            item=a[top];
            top--;
            cout<<"\nPopped value is :"<<item;
            return item;
        }
         else
        {
            cout<<"\nStack underflow";
        }
        return 0;
    }
    void show()
    {
        if(isEmpty())
            cout<<"\nEmpty stack";
        else
        for(int i=top;i>-1;i--)
            cout<<a[i]<<" ";
    }
};

int main()
{
    int ch,item,p;
    stack s;
    while(1)
    {
        cout<<"\n\n1.push\n2.pop\n3.show\n4.exit";
        cout<<"\nenter choice";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\nenter no:";
            cin>>p;
            s.push(p);
            break;
        case 2:
           item=s.pop();
            break;
            case 3:
            s.show();
            break;
        case 4:
            exit(0);
        }
    }
}*/

#define max 3
class stack
{
    int a[max];
    int top;
public:
    stack()
    {
        top=-1;
    }
    int isFull()
    {
        if(top==max-1)
            return 1;
        else
            return 0;
    }
    int isEmpty()
    {
        if(top==-1)
            return 1;
        else
            return 0;
    }
    int push(int val)
    {
        if(!isFull())
        {
            a[top++];
            a[top]=val;
            return val;
        }
        else
        {
            cout<<"\nDue to stack OverFlow "<<val<<" cant be consider";
        }
        return 0;
    }
    int pop()
    {
        int item;
        if(!isEmpty())
        {
            item=a[top];
            a[top--];
            cout<<"Popped Value is : "<<item;
            return item;
        }
        else
        {
            cout<<"\nstack underflow";
        }
        return 0;
    }
    void show()
    {
        for(int i=top;i>-1;i--)
            cout<<a[i];
    }
};

int main()
{
    int val,ch;
    stack s;
    while(1)
    {
        cout<<"\n\n1.push\n2.pop\n3.Show\n4.exit";
        cout<<"\nEnter choice";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\nEnter no: ";
            cin>>val;
            s.push(val);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.show();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    return 0;
}
