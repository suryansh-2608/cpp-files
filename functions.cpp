#include <iostream>
using namespace std;
// void display(){
//     cout<<"Hello";
// }
// int add(int x, int y){
//     int z;
//     z = x+y;
//     return z;
// }
int max(int a, int b, int c){
    if(a>b){
        if(a>c){
            return a;
        }
        else return c;
    }
    else if(b>a){
        if(b>c){
            return b;
        }
        else return c;
    }
    else return c;
}
int main()
{
    // display();
    // int a;
    // cout<<endl<<"Enter the first number: ";
    // cin>>a;
    // cout<<endl;
    // int b;
    // cout<<"Enter the second number: ";
    // cin>>b;
    // cout<<endl;
    // int c = add(a, b);
    // cout<<endl<<"Sum is "<<c;
    int x, y, z;
    cout<<"Please enter three numbers to compare: "<<endl;
    cin>>x;
    cout<<endl;
    cin>>y;
    cout<<endl;
    cin>>z;
    cout<<endl<<"The max number is: "<<max(x, y,z);
    return 0;
}