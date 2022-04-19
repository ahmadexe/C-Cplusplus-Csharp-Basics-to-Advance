#include <algorithm> 
#include<iostream>
#include<string>
using namespace std; 
int main() 
{   
    string str = "Journal Dev reverse example"; 
    string x = str;
    reverse(str.begin(), str.end()); 
    cout<<"\n"<<str;

    bool a = x==str;

    cout<<"\n"<<a; 
    return 0;
}