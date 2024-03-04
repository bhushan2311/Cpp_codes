#include<iosteram>
using namespace std;

template<typename T>
T large(T n1,T n2)
{
    return(n1>n2)? n1:n2;
}

int main()
{
    cout<<large<int>(7,2)<<endl;
    cout<<large<float>(1.2,2.3)<<endl;
}
