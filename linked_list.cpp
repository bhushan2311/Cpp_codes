#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
};
node *head=NULL;

void create()
{
    node *temp,*n;
    temp=new node;
    cout<<"enter no. ";
    cin>>temp->data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        n=head;
        while(n->next!=NULL)
        {
            n=n->next;
        }
        n->next=temp;
    }
    cout<<endl;
}
void view()
{
    node *p;
    if(head==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        p=head;
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
    }
}

void insert_begin()
{
    node *t;
    t=new node;
    cout<<"\nEnter no. to be insert at begin: ";
    cin>>t->data;
    t->next=NULL;
    if(head==NULL)
    {
        head=t;
    }
    else
    {
        t->next=head;
        head=t;
    }

}

/*void insert_pos()
{
    node *temp,*p;
    temp=new node;
    int pos,i;
    cout<<"Enter position you want to insert the value:";
    cin>>pos;
    cout<<"Enter value to be inserted:";
    cin>>temp->data;
    temp->link=NULL;
    if(pos==0)
    {
        temp->link=start;      //condition similar to condition of insert at begin
        start=temp;
    }
    else
    {
        p=start;
        for(i=1;i<pos-1;i++)
        {
            p=p->link;
        }
        temp->link=p->link;
        p->link=temp;
    }
}

void delet_begin()
{
    node *n;
    if(start==NULL)
    {
        cout<<"\nList is Empty";
    }
    else
    {
        n=start;
        start=start->link;
    }
}

/*void delet_end()                  //not use
{
    node *ptr;
    if(start==NULL)
    {
        cout<<"\nList is Empty";
    }
    if else
    {
       ptr=start;
       while(ptr->link!=NULL)
            ptr=ptr->link;

    }
}
*/
int main()
{
    int ch;
    while(1)
 {
    cout<<"\n\n1.Enter value to list";
    cout<<"\n2.view list";
    cout<<"\n3.insert value at begin";
    /*cout<<"\n4.Insert value at position";
    cout<<"\n5.delete value at begin";
    cout<<"\n6.Exit";*/
    cout<<"\nenter your choice";
    cin>>ch;
    switch(ch)
    {
    case 1:
         create();
         break;
    case 2:
        view();
        break;
    case 3:
        insert_begin();
        break;
    /*case 4:
        insert_pos();
        break;
    case 5:
        delet_begin();
        break;
    case 6:
        exit(0);
        break;
    default:
        cout<<"invalid choice!!!";*/
    }
 }

    return 0;
}



/*class node
{
    public:
    int data;
    node *next;
};

node *head=NULL;

void create()
{
    node *temp,*n;
    temp=new node;
    cout<<"\nEnter no.";
    cin>>temp->data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        n=head;
        while(n->next!=NULL)
            n=n->next;
        n->next=temp;
    }
    cout<<endl;
}

void view()
{
    node *p;
    if(head==NULL)
    {
        cout<<"\nList is empty"<<endl;
    }
    else
    {
        p=head;
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
    }
}

void insert_begin()
{
    node *t;
    t=new node;
    cout<<"\nEnter no. to be insert at begin: ";
    cin>>t->data;
    t->next=NULL;
    if(head==NULL)
    {
        head=t;
    }
    else
    {
        t->next=head;
        head=t;
    }

}

int main()
{
    int ch;
    while(1)
    {
        cout<<"\n\n1.Create List";
        cout<<"\n2.View List";
        cout<<"\n3.Insert begin";
        cout<<"\nEnter Choice";
        cin>>ch;

        switch(ch)
        {
        case 1:
            create();
            break;
        case 2:
            view();
            break;
        case 3:
            insert_begin();
            break;
        }
}

}*/
