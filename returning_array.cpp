#include<iostream>
using namespace std;

int* arr()
{
   static int a[]={1,2,3,4};              //static is used to locate it as global array from local array
    return a;
}

int main()
{
    int *p=arr();
    for(int i=0;i<4;i++)
    cout<<p[i];
}

//***********************************************
/*
int* arr()
{
     int n;
    cout<<"Enter how many Elements do you want to enter:";
    cin>>n;
    int *a=new int [100];
    cout<<"Enter nos.";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    return a;

}

int main()
{
    int n;
    int *p=arr();
    for(int i=0;i<n;++i)
    {
        cout<<p[i];
    }
        delete [] p;
    return 0;
}
*/

//*************************************************************
/*
class retun
{
    public:
    int x;
    int *a=new int [100];

    retun arr()
    {
        retun t;
        t.a[0]=1;
        return t;
    }
    void show()
    {
        cout<<a[0];
    }

};
int main()
{
    retun c1,c2;
    c2=c1.arr();
    c2.show();
}

*/
