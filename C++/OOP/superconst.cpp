#include<iostream>
using namespace std;

class Alpha{
public:
    Alpha(){}
    Alpha(int a){
        cout<<"I'm the Alpha Constructor."<<endl;
        cout<<"My value is: "<<a<<endl;
    }
};

class Beta{
public:
    Beta(){}
    Beta(int b){
        cout<<"This is beta constructor"<<endl;
        cout<<"My value is: "<<b<<endl;
    }
};

class Charlie : public Beta, public Alpha{
public:
    Charlie(){}
    Charlie(int a, int b, int c, int d) : Alpha(a), Beta(b){
        cout<<"I'm charlie constructor"<<endl;
        cout<<"My values are"<<c<<"And"<<d<<endl;
    }

};

int main(int argc, char const *argv[])
{
    Charlie c(1,2,3,4);

    
return 0;
}