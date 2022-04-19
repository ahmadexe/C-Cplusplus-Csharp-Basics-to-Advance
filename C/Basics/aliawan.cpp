#include <iostream>
using namespace std;

void change(int* b){
    *b = 9;
}

int main(){

    int x = 4;
    int* a = &x;
    cout<<*a<<endl;
    change(a);
    cout<<x;
    return 0;

}