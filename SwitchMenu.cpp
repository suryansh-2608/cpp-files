#include <iostream>
using namespace std;
int main()
{
    int option;
    cout<<"Choose an option: \n"<<"1. Add\n"<<"2. Subtract\n"<<"3. Multiply\n"<<"4. Divide\n"<<"Enter Your Choice\n";
    cin>>option;

    switch (option)
    {
    case 1:
        int a, b, c;
        cout<<"Please enter the two numbers\n";
        cin>>a>>b;
        c=a+b;
        cout<<c;
        break;
    case 2:
        cout<<"Please enter the two numbers\n";
        cin>>a>>b;
        c=a-b;
        cout<<c;
        break;
    case 3:
        cout<<"Please enter the two numbers\n";
        cin>>a>>b;
        c=a*b;
        cout<<c;
        break;
    case 4:
        cout<<"Please enter the two numbers\n";
        cin>>a>>b;
        c=a/b;
        cout<<c;
        break;
    
    default:
        cout<<"Thansk for using the program";
        break;
    }
    return 0;
}