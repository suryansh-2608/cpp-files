#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number to check whether it is positive negative"<<endl;
    cin>>a;
    if(a>=0)
    {
        cout<<a<<" is a positive number"<<endl;

    }
    else
    {
        cout<<a<<" is a negative number";
    }
    return 0;
}