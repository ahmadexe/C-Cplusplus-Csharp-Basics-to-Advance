#include<iostream>
#include<string>
using namespace std;

class Binary{
    
    string s;
public:    
    void read(void);
    void check(void);
};

void Binary :: read(void){
    cout<<"Enter a binary number: ";
    cin>>s;   
}

void Binary :: check(void){
    for (int i = 0; i < s.length(); i++){
        if(s.at(i) != '0' && s.at(i)!= '1'){
            cout<<"Wrong number.";
            exit(0);
        }
    }
}

int main(int argc, char const *argv[])
{
    Binary x;
    x.read();
    x.check();
    
return 0;
}