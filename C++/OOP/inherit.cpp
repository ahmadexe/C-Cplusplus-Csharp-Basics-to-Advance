#include<iostream>
using namespace std;

class Employee{
public:
    int id;
    int salary;

    Employee(){
        id = 0;
        salary = 0;
    }
    Employee(int inputid){
        id = inputid;
        salary = 100;
    }

    void getData(){
        cout<<"The id: "<<id<<endl;
        cout<<"The salary: "<<salary<<endl;
    }

};

class Programmer : public Employee{
public:
    Programmer(int inputid){
        id = inputid;
        salary = 10000;
    }


};

int main(int argc, char const *argv[])
{
    Employee Ahmad(90);
    Ahmad.getData();

    Programmer ax(8);
    ax.getData();
    
return 0;
}