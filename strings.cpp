#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s = "Hello ";
    // cout<<s<<endl;
    // string name;
    // cout<<"Please enter your name: ";
    // cin>>name;
    // cout<<endl;
    // cout<<"Hello "<<name;   
    string a = "World";
    string w = s + a;
    string c;
    c = w;
    cout<<c<<endl;
    cout<<w<<endl;
    cout<<s.length()<<endl;
    return 0;
}