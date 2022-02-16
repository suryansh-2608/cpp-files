class Rectangle
{
    public:
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length*breadth);
    }
};
#include <iostream>
using namespace std;
int main(void)
{
    Rectangle r1, r2;
    r1.length = 10;
    r1.breadth = 20;
    cout<<r1.area()<<" "<<r1.perimeter();
}