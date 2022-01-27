#include <iostream>
using namespace std;
int main()
{
    string s = "Welcome";
    char  str[10];
    s.copy(str, s.length());
    cout<<str<<endl;
    cout<<s.find('c')<<endl;
    cout<<s.rfind('c')<<endl;


    cout<<s.at(5)<<endl;
    cout<<s.front()<<endl;
    cout<<s.back()<<endl;

    return 0;
}