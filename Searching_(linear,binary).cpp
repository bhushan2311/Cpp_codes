#include<iostream>
using namespace std;

//Linear Search or Sequential Search

int main()
{
    int a[]={23,46,55,58,69,70,99};
    int item,flag=1,n=7;
    cin>>item;
    for(int i=0;i<n;i++)
    {
        if(item==a[i])
        {
            flag=0;
            cout<<"Search Successful at "<<i;
        }
    }
     if (flag==1)
            cout<<"Search UNsuccessful";
}/*

//Binary search
int main()
{
    int a[]={23,46,55,58,69,70,99};
    int l=0,m,n=7,item,flag=1;
    int u=n-1;
    cin>>item;
    while(l<=u)
    {
        m=(l+u)/2;
            if(item==a[m])
            {
                flag=0;
                cout<<"search successful at "<<m;
                exit(0);
            }
            else if(item>a[m])
                l=m+1;
            else
                u=m-1;

    }
    if(flag==1)
        cout<<"search Unsuccessful";
}
*/
