#include <iostream>
using namespace std;
int main()
{
    int i,j,rows;
    cout<<"how many rows do u want to print:"<<endl;
    cin>>rows;
    for(i=1;i<=rows;++i)
    {
        for(j=1;j<=i;++j)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
