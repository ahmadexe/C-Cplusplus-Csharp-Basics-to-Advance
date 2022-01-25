#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    
    int *y;
    int x[] = {9,0,76,100};
    cout<<x[0+1];
    y = x;
    cout<<*(y+2);
return 0;
}