#include <iostream>
using namespace std;
int main()
{
    int a[100],n;
    int *p[100];
    cout<<"How many Elements do you want to enter:"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" Elements."<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        p[i]=&a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"The Element of a["<<i<<"] is "<<a[i]<<endl;
    }
}
