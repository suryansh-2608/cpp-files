class rectangle
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
int main()
{
    rectangle r;
    rectangle *p;
    p=&r;
    r.length = 10;
    p->length=10;
    p->breadth=5;
    cout<<p->area();
    

}