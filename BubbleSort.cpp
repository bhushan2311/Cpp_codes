#include<iostream>
using namespace std;

void sort()
{
    int a[]={23,41,5,13,50};
    int round,i,n;

    for(round=1;round<5;round++)
        for(i=0;i<5-round;i++)
        if(a[i]>a[i+1])
        {
            n=a[i];
            a[i]=a[i+1];
            a[i+1]=n;
        }
        for(i=0;i<5;i++)
        cout<<a[i]<<endl;
}

int main()
{
    sort();
    return 0;
}
