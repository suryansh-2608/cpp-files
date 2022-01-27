#include <iostream>
using namespace std;
int main()
{
    string str = "Hello";
    string::iterator it;
    for(it = str.begin(); it!= str.end(); it++ ){
        cout<<*it;
    }   
    return 0;
}