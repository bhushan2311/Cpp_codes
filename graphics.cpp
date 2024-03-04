#include<iostream>
#include <graphics>
#include <math>
using namespace std;

void plotpix(int,int,int,int);

class shape
{
public:
    void init();
    void drawcircle(int X,int Y,int R);
    void drawline(int,int,int,int);
    void outersq();
    void innersq();
};

int main()
{
    cout<<"Roll no. 205C008"<<endl;
    shape a;
    a.init();
    a.outersq();
    a.innersq();
    a.drawcircle(250,175,67);
    getch();
    closegraph();
}
