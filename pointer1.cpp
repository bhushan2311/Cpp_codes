#include <iostream>
using namespace std;

/*void fun(int x,int y);
int main()
{
    fun(2,3);
}

void fun(int x,int y)
{
    cout<<"x "<<x<<"y "<<y;
}
*/

void swap(int *x,int *y);
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
}

//jya variable(a,b) la adress(&) deto ty variable(a,b) la value assign kraichi , tevha pointer variable(x,y) tya variable(a,b) la access karto...

void swap(int *x,int *y)
{
    int t;
    t=*x;   //i.e t=a
    *x=*y;  //    a=b
    *y=t;   //    b=t
}

/*void swap(int *x,int *y)
{
    int t;
    cin>>*x;
    cin>>*y;
    t=*x;
    *x=*y;
    *y=t;
}
int main()
{
    int a,b;
    swap(&a,&b);
    cout<<a<<b;
}*/
