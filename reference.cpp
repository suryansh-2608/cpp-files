#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &y = x;
    cout<<y<<endl;
    x++;
    cout<<y<<endl;
    y++;
    cout<<y<<endl;

    return 0;
}