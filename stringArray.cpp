#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    char a1[20] = "235";
    char a2[20] = "54.70";
    // cout<<strstr(a1, a2)<<endl;
    // cout<<strchr(a1, 'm')<<endl;
    // cout<<strrchr(a1, 'm')<<endl;
    // cout<<strcmp(a1, a2)<<endl; 
    long int x = strtol(a1, NULL, 10);
    float y = strtof(a2, NULL);
    cout<<x<<endl<<y<<endl;
    char a3[20] = "x=10;y=20;z=35";
    char *token = strtok(a3, ";");
    while(token != NULL)
    {
        cout<<token<<endl;
        token = strtok(NULL, ";");
    } 
    return 0;
}