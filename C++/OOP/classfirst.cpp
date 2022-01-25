#include<iostream>
using namespace std;

class Employee{
    private:
        int a, b, c;

    public:
        int d, e;  
};

int main(int argc, char const *argv[])
{
    Employee Ahmad;
    Ahmad.d = 6;
    Ahmad.e = 9;
    // Ahmad.a = 10; cant do this since it is private.
    cout<<Ahmad.d;
    cout<<Ahmad.e;

    
    
return 0;
}