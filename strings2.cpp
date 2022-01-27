#include <iostream>
using namespace std;
int main()
{
    string s = "Hello";
    string s1 = "World";
    s.append(" Bye");
    cout<<s<<endl;
    s.insert(7, "hag");
    cout<<s<<endl;
    s.replace(3, 7, "ss");
    cout<<s<<endl;
    s.erase();
    cout<<s<<endl;
    s.push_back('a');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    s1.swap(s);
    cout<<s<<endl;
    cout<<s1<<endl;
    return 0;
}