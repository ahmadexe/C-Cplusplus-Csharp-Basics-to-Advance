#include<iostream>
#include<string>
using namespace std;


int main(int argc, char const *argv[])
{   
    string str;
    string s1 = "Ah";
    string s2 = "mad";
    cout<<"Enter a string: ";
    getline(cin, str);
    cout<<str;
    s1.append(s2);
    cout << s1 <<endl;
    
    return 0;
}