#include <iostream>
using namespace std;
int main()
{
    int a=10, b=15, c= 20;
    int sum = 5;
    cout<<sum<<endl;
    sum = sum + a;
    cout<<sum<<endl;
    sum = sum + b;
    cout<<sum<<endl;
    sum = sum + c;
    cout<<sum<<endl;
    sum = a+b+c+sum;
    cout<<sum<<endl;
    return 0;
}