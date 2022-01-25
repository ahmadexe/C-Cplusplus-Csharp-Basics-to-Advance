#include<iostream>
using namespace std;

class Calculator{
public:
    
    int add(int a, int b){
        return a+b;
    }

    int subtract(int a, int b){
        return a-b;
    }

    int multiply(int a, int b){
        return a*b;
    }

    float divide(float a, float b){
        return a/b;
    }


};



int main(int argc, char const *argv[])
{
    Calculator calculator;
    float alpha;
    float beta;
    int num1;
    int num2;
    int choice;
    bool task = true;
    while (task){
        cout<<"1. Add"<<endl<<"2. Subtract"<<endl<<"3. Multiply"<<endl<<"4. Divide"<<endl<<"5. Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        if (choice == 1){
            cout<<"Enter the numbers: ";
            cin>>num1>>num2;
            cout<<calculator.add(num1,num2)<<endl;
        }

        else if(choice == 2){
            cout<<"Enter the numbers: ";
            cin>>num1>>num2;
            cout<<calculator.subtract(num1,num2)<<endl;
        }

        else if(choice == 3){
            cout<<"Enter the numbers: ";
            cin>>num1>>num2;
            cout<<calculator.multiply(num1,num2)<<endl;
        }
       
        else if(choice == 4){
            cout<<"Enter the numbers: ";
            cin>>alpha>>beta;
            cout<<calculator.divide(alpha,beta)<<endl;

        }

        else if(choice == 5){
            task = false;
            break;
            
        }

        else{
            cout<<"Invalid Choice."<<endl;
        }

    }
    
return 0;
}