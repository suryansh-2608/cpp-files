#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Please enter the age: ";
    cin>>age;
    if(age>=0 && age<18)
    {
        cout<<"You are a child below 18 thus not an adult";
    }
    else if(age>=18 && age<=50)
    {
        cout<<"You are young and adult";
    }
    else
    {
        cout<<"You are old";
    }
    return 0;
}