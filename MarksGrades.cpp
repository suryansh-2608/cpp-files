#include <iostream>
using namespace std;
int main()
{
    int m1, m2, m3;
    float avg;
    cout<<"Enter the marks scored: "<<endl;
    cin>>m1>>m2>>m3;
    avg = (m1 + m2 + m3)/3;
    if(avg>=60)
    {
        cout<<"You scored A grade";
    }
    else if(avg>=30 && avg<60)
    {
        cout<<"You scored B grade";
    }
    else
    {
        cout<<"You scored C grade";
    }
    return 0;
}