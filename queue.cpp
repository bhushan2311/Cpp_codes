#include <iostream>
using namespace std;
#define MAX 4

class Q
{
    int front;
    int rear;
    int a[MAX];
public:
    Q()
    {
        front = -1;
        rear = -1;
    }

    int isEmpty()
    {
        if(MAX==-1)
            return 1;
        else
            return 0;
    }

    int isFull()
    {
        if(rear==MAX-1)
            return 1;
        else
            return 0;
    }

    int insert(int val)
    {
        if(!isFull())
        {
            a[rear++];
            a[rear]=val;
            return val;
        }
        else
        {
            cout<<"Queue is Full";
        }
        return 0;
    }

     int delet()
     {
         int value;
         if(!isEmpty())
         {
             cout<<"Deleted Element is ";
             value=a[front];
             if(front>=rear)
             {
                 front=-1;
                 rear=-1;
             }
             else
                front++;
                 cout<<value;
             front++;
             return value;
         }
            else
            cout<<"Queue UNDER FLOW";
     }
};

int main()
{
    int val,ch;
    Q q;
    while(1)
    {
        cout<<"\n\n1.insert no.";
        cout<<"\n2.delete\n3.exit";
        cout<<"\nEnter your choice";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\nEnter no.";
            cin>>val;
            q.insert(val);
            break;
        case 2:
            q.delet();
            break;
        case 3:
            exit(0);
            break;
        }
    }
}
