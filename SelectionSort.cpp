#include<iostream>
using namespace std;
int main()
{
    int n,mini,arr[19],loc,temp;

    cout<<"******Selection Sort for INTEGER data_type*******"<<"\n\n";

    cout<<"Enter size of array:";
    cin>>n;

    cout<<"Enter array integer elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        mini=arr[i];
        loc=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<mini)
            {
                mini=arr[j];
                loc=j;
            }
        }

        temp=arr[i];
        arr[i]=arr[loc];
        arr[loc]=temp;
    }
    cout<<"Sorted integer array is:";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }


   /* cout<<"\n\n*****Selection Sort for FLOAT data_type*****\n\n";

    int s,loca;
    float fltarr[20],minim,temps;

    cout<<"Enter size of float array:";
    cin>>s;

    cout<<"Enter array float elements:";
    for(int i;i<s;i++)
    {
        cin>>fltarr[i];
    }
    for(int i=0;i<s-1;i++)
    {
        minim=fltarr[i];
        loca=i;
        for(int j=i+1;j<s;j++)
        {
            if(fltarr[j]<minim)
            {
                minim=fltarr[j];
                loca=j;
            }
        }
        temps=fltarr[i];
        fltarr[i]=fltarr[loca];
        fltarr[loca]=temps;
    }
    cout<<"sorted array is:";
    for(int i=0;i<s;i++)
    {
        cout<<fltarr[i]<<" ";;
    }

    return 0;*/
}
