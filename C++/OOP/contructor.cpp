#include<iostream>
using namespace std;

class Const{
    public:
        Const(){
            cout<<"Constructor";
        }

        int alpha(int x){
            return x+5;
        }


};

int main(int argc, char const *argv[])
{
    Const myconst;
    cout<<myconst.alpha(9);
    
return 0;
}