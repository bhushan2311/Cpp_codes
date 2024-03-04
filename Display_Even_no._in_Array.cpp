#include<iostream>
using namespace std;

int main()
{
    int i,j=0,k=0,arr[5],evenarr[5],oddarr[5];
    cout<<"Enter any 5 elements:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            evenarr[j]=arr[i];
            j++;
        }

        else
        {
            oddarr[k]=arr[i];
            k++;
        }

    }
    cout<<"Even Elements is/are:"<<endl;
    for(i=0;i<j;i++)
    {
        cout<<evenarr[i]<<" ";
    }

    cout<<endl;
    cout<<"Odd Elements is/are:"<<endl;
    for(i=0;i<k;i++)
    {
        cout<<oddarr[i]<<" ";
    }


    return 0;
}
