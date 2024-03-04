#include<iostream>
using namespace std;

class dnode
{
    public:
    int data;
    dnode *next;
    dnode *pre;
};

class dll
{
    public:
    dnode *start=NULL;

    void create();
    void view();
};

void dll::create()
{
    dnode *t,*n;
    t=new dnode;
    cout<<"Enter number";
    cin>>t->data;
    t->next=NULL;
    if(start==NULL)
    {
        start=t;
    }
    else
     {
         n=start;
         while(n->next!=NULL)
         {
             n=n->next;
         }
         n->next=t;
         t->pre=n;
     }
}

void dll::view()
{
    dnode *temp;
    if(start==NULL)
    {
        cout<<"List is Empty";
    }
    else
    {
        temp=start;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}

int main()
{
    int ch;
    dll d;
    while(1)
    {
        cout<<"\n\n1.Create List";
        cout<<"\n2.view List";
        cout<<"\nEnter choice";
        cin>>ch;
        switch(ch)
        {
        case 1:
            d.create();
            break;
        case 2:
            d.view();
            break;
        }
    }
    return 0;
}
