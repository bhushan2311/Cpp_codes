/* Kostya has begun to look for occurrences of four anywhere. He has a list of T integers,
for each of them he wants to calculate the number of occurrences of the digit 4 in the decimal representation. He is too busy now, so please help him.*/

#include<iostream>
using namespace std;

int four()
{
    int n;
    cin>>n;
    int count=0;
    while(n>0)
  {
    if(n%10==4)
    {
        count++;
    }
    n=n/10;
  }
   return count;
}
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int disp=four();
        cout<<disp<<endl;
    }

    return 0;
}
