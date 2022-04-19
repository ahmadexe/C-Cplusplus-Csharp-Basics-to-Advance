#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{

    string name = "ahmad";
    //cout<<name.at(0);
    //cout<<name.empty(); 
    cout<<name.rfind("a");
    string og = name.substr(1,4);
return 0;
}