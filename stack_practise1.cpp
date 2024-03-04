//unfinished :(




#include<iostream>
using namespace std;

class Stack
{
    struct arr_stack
    {
        int top;
        int capacity;
        int *array;
    };
    arr_stack *s;
public:
    Stack(int capacity)
    {
        s=new arr_stack;
        s->capacity=capacity;
        s->top=-1;
        s->array=new int[s->capacity-1];
    }
    int is_fullstk()
    {
        if(s->top==s->capacity-1)
        return 1;
        else
            return 0;
    }
    int is_emtstk()
    {
        if(s->top==-1)
        return 1;
        else
            return 0;
    }

    void push(int item)
    {
        if(!is_fullstk())
        {
            s->array[s->top]=s->array[s->top+1];
            s->array[s->top]=item;
        }
        else
            cout<<"Stack Overflow"<<endl;
    }

    void pop()
    {
        int item;
        if(!is_emtstk())
        {
            item=s->array[s->top];
            s->array[s->top]=s->array[s->top-1];
        }
        else
            cout<<"Stack Underflow"<<endl;
    }

    void show()
    {
        for(int i=s->top;i>-1;i--)
            cout<<s->array[i];
    }
};

int main()
{
    Stack s1(4);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.show();
    //s1.pop();
}
