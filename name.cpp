#include <iostream>
using namespace std;
int main()
{
    string name;
    cout<<"What is your name?";
    getline(cin, name);
    cout<<"Welcome Mr./Ms. "<<name;
    return 0;
}