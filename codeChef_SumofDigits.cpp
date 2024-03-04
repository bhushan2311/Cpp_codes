#include<iostream>
using namespace std;

/*int main()
{
    int n,T;
    cin>>T;

    int sum=0;
    for(int i=0;i<T;i++)
    {
        cin>>n;
        while(n>0)
        {
            int i=n%10;
            sum=sum+i;
            n=n/10;
        }
        cout<<sum<<endl;
        sum=0;
    }
}
*/

int add()
{
    int n,T;
    cin>>T;

    int sum=0;
    for(int i=0;i<T;i++)
    {
        cin>>n;
        while(n>0)
        {
            int i=n%10;
            sum=sum+i;
            n=n/10;
        }
        cout<<sum<<endl;
        add();
    }
    return 0;
}
int main()
{
    add();
}
