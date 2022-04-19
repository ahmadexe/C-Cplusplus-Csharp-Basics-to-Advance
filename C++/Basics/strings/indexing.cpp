#include<iostream>
#include<cstring>
using namespace std;

int main(int argc, char const *argv[])
{

    string name = "Ahmad";
    char array[name.length()];
    strcpy(array, name.c_str());
    for(int i = 0; i < name.length(); i++){
        cout<<array[i];
    }
    cout<<"\n";
    array[0] = 'b';
    for(int i = 0; i < name.length(); i++){
        cout<<array[i];
    }
    cout<<"\n"<<name;

    string g = name;
    g[0] = 'x';
    cout<<"\n"<<name;
    

    char* x = &(name[0]);
    x[0] = 'X';
    cout<<"\n"<<name;



return 0;
}