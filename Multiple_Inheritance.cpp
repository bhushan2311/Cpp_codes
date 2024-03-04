#include <iostream>
using namespace std;
class area
{
public:

    int sq_area(int l)
    {
        return(l*l);
    }
};
class perimeter
{
public :

    int sq_peri(int l)
    {
        return 4*(l);
    }
};
class square : public area, public perimeter
{
public:
    int length;
    void getdata()
    {
        cout<<"Enter Length"<<endl;
        cin>>length;
    }

    int area()
    {
        return area::sq_area(length);                             //uses function of parent_class(area) in child_class(square) using ::
    }
    int peri()
    {
        return perimeter::sq_peri(length);                        //uses function of parent_class(perimeter) in child_class(square) using ::
    }
};
int main()
{
    square s;
    s.getdata();
    cout<<"Area of Square is : "<<s.area();
    cout<<"\nPerimeter of square is : "<<s.peri();
    return 0;
}
