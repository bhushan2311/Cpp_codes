#include<iostream>
using namespace std;

template <class T>
class box
{
    struct box1
    {
        int capacity;
        T *array_ptr;
    };
    box1 *ptr;
public:
    box(int capacity)
    {
        ptr=new box1;         //memory allocation is necessary
        ptr->capacity=capacity;
        ptr->array_ptr=new T[ptr->capacity-1];
    }
    void create(int index,T data)
    {
        if(index>=0 && index<ptr->capacity)
            ptr->array_ptr[index]=data;                         //for eg. a[0]=3
        else
            cout<<"\nIndex is not valid";
    }
    void show(int index,T data)                                //function to show data an particular index
    {
        if(index>=0 && index<ptr->capacity)
        {
            data=ptr->array_ptr[index];
            cout<<"\nValue is "<<data;
        }
        else
            cout<<"\nIndex is not valid";
    }
    void show_array()                 //function to print an array
    {
        for(int i=0;i<ptr->capacity;i++)
            cout<<ptr->array_ptr[i]<<endl;
    }
};
int main()
{
    int data;
    box<float>b1(4);
    //b1.create(0,3.4);
    //b1.show(0,data);
    b1.create(0,3.2);
    b1.create(1,4.2);
    b1.create(2,5.5);
    b1.create(3,7.2);
    b1.show_array();
    /*box b1(4);                      //without class template
    b1.create(0,32);
    b1.create(1,34);
    b1.create(2,56);
    b1.create(3,98);
    //b1.show(2,data);
    b1.show_array();*/
}
