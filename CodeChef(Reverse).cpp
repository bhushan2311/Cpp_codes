#include<iostream>
using namespace std;

int main()
{
    int n,T,s;
    cin>>T;
        for(int i=0;i<T;i++)
        {
           // int r=0;                           //remember always where to write 0
            cin>>n;
            while(n>0)
            {
                s=n%10;
                //r=r*10+s;
                n=n/10;
                cout<<s;
            }
            //cout<<r<<endl;
            cout<<endl;
        }

       /*int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int r =0;
	    int n;
	    cin>>n;
	    while(n>0)
	    {
	        int s = n%10;
	         r = r*10+s;
	         n = n/10;
	    }
	    cout<<r<<endl;
	}*/
	return 0;
}


/*
int reverse()
{
    int T,n;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>n;
        while(n>0)
            {
                int s=0;
                s=n%10;
                n=n/10;
                return s;
            }
    }
}

int main()
{
    int r=reverse();
    cout<<r<<endl;
    return 0;
}*/
