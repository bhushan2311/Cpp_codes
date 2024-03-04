#include<iostream>
using namespace std;

class sample
{
    int a[5],sum=0;
    public:
        void getdata()
        {
            cout<<"Enter 5 Elements"<<endl;
            for(int i=0;i<5;i++)
            {
                cin>>a[i];
                sum=sum+a[i];
            }
        }

        void showdata()
        {

            cout<<"\nSum of 5 Elements is:"<<endl;
            cout<<sum;
        }
};

int main()
{
    sample s;
    s.getdata();
    s.showdata();
    return 0;
}
