#include <iostream>
using namespace std;
int add(int x, int y){
    int z;
    z = x + y;
    return z;
}
float add(float p, float q){
    float r;
    r = p+q;
    return r;
}
int add(int a, int b, int c){
    int d;
    d = a+b+c;
    return d;
}
int main()
{
    cout<<add(10, 12)<<endl;
    cout<<add(2.5f, 6.4512f)<<endl;
    cout<<add(10, 12, 15)<<endl;

    return 0;
}