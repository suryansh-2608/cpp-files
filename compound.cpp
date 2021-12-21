#include <iostream>
using namespace std;
int main()
{
    int hrs;
    cout<<"Enter the hours : "<<endl;
    cin>>hrs;
    if(hrs>=9 && hrs<=18)
    {
        cout<<"Working hours";
    }
    else
    {
        cout<<"Lesiure hours";
    }
    
    return 0;
}