#include<iostream>
#define max 5
using namespace std;

int main()
{
    int a[max][2]={{1,2},
                  {2,3},
                  {1,9},
                  {4,1},
                  {9,4}};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<2;j++)
       {
       cout<<"a["<<i<<"]["<<j<<"]"<<a[i][j];
        cout<<endl;
       }
    }
    return 0;
}
