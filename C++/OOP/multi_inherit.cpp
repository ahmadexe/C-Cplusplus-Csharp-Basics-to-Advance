#include<iostream>
using namespace std;

class Student{
public:
    string Name;
    int roll_no;

    void setInfo(string inputName, int inputroll){
        Name = inputName;
        roll_no = inputroll;
    }

    void getInfo(){
        cout<<"The name of the student is: "<<Name<<endl;
        cout<<"The roll no is: "<<roll_no<<endl;
    }


};

class Exam : public Student{
public:
    int marks1;
    int marks2;
    void setMarks(int marks_in_python, int marks_in_cpp){
        marks1 = marks_in_python;
        marks2 = marks_in_cpp;
        cout<<"The marks of student: "<<Name<<" ,roll no: "<<roll_no<<" have been set"<<endl;
    }


};

class Result : public Exam{
public:
    void getMarks(){
        cout<<"Marks in python are: "<<marks1<<endl;
        cout<<"Marks in c++ are: "<<marks2<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Result ahmad;
    ahmad.setInfo("Ahmad", 1);
    ahmad.getInfo();

    ahmad.setMarks(100,99);
    ahmad.getMarks();
    
    
return 0;
}