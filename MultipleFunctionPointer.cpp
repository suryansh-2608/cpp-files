#include <iostream>
using namespace std;

int max(int x, int y)
{
    cout<<(x>y?x:y)<<endl;
}

int min(int x, int y)
{
    cout<<(x<y?x:y);
}

int main()
{
    int (*fp)(int, int);
    fp = max;
    (*fp)(10,5);
    fp = min;
    (*fp)(10, 5);
    return 0;
}