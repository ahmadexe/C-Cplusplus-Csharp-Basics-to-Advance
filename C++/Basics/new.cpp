#include<iostream>
using namespace std;

void hello(string n){
    n = "ahmad";
}

int main(int argc, char const *argv[])
{
    string name = "s";
    hello(name);
    cout<<name;
    
return 0;
}