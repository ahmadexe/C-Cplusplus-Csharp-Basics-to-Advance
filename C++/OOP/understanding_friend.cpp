#include<iostream>
using namespace std;

class Y;
class X{
    int data;
    public:
        void setData(int val){
            data = val;
        }
    
    friend void add(X,Y);
};

class Y{
    int num;
    public:
        void setNum(int val){
            num = val;
        }
    friend void add(X,Y);
};

void add(X o1, Y o2){
    cout<<"Answer is: "<<o1.data+o2.num;
};

int main(int argc, char const *argv[])
{
    X a;
    Y b;

    a.setData(5);
    b.setNum(6);

    add(a,b);
    
return 0;
}