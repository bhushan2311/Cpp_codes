#include <iostream>

using namespace std;

class test
{
    int a;
    public:
        void getA(int a)
        {
            this->a=a;
        }
        void showA()
        {
            cout<<"A="<<a;
        }
};

int main()
{
    test t;
    t.getA(987);
    t.showA();
    return 0;
}
