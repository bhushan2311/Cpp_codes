#include <iostream>
using namespace std;

/*int main()
{
    int *p=new int;
    cout<<"enter no.";
    cin>>*p;
    cout<<"entered no. is"<<*p;
    delete p;
}

class student
{
public:
    int p[4];
    void get()
    {
        for(int i=0;i<4;i++)
        {
            cin>>*(p+i);
        }
    }
    void show()
    {
         for(int i=0;i<4;i++)
        {
            cout<<*(p+i);
        }
    }
};
int main()
{
    student *s=new student;
    s->get();
    s->show();
    delete s;
    return 0;
}*/

/*int main()
{
    int *p=new int[4];
    cout<<"enter 4 no."<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>*(p+i);
    }
    for(int i=0;i<4;i++)
    {
        cout<<*(p+i);
    }
    delete []p;
}*/

int main()
{
    int n;
    cout<<"enter no of student"<<endl;
    cin>>n;
    int *a=new int[n];
    cout<<"Enter "<<n<<" students"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }
    delete []a;
}

