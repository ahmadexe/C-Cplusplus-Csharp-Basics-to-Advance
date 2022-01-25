#include<iostream>
using namespace std;

void table(int num){
    for(int i = 1; i<=10;i++){
        cout<<num * i<<endl;
    }
}
int main(int argc, char const *argv[])
{
    int x = 5;
    table(x);

return 0;
}