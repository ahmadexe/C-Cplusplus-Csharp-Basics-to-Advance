#include<iostream>
using namespace std;

struct Student{
    string name;
    int marks;
    void prin(){
        cout<<"OK";
    }
};

void change(int* a){
  *a = 7;
}

int main(int argc, char const *argv[])
{

    struct Student ahmad;
    ahmad.name = "Ahmad";
    ahmad.marks = 123;
    cout<<ahmad.marks;
    ahmad.prin();

    int* a = (int*)malloc(sizeof(int) * 3);
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    for (int i = 0; i < 3; i++){
        cout<<a[i];
    }
return 0;
}