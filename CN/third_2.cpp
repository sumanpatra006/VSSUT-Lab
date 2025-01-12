#include<iostream>
using namespace std;
class Mathematics{
    public:
    int num1 ;
    float num2;

    Mathematics(int a, float b){
        num1 = a;
        num2 = b;
    }

    //function with no return type and an argument
    void function1(int num){
        cout<<"this function doesn't have any return type but have arguemnet , it takes one number as argument and multiplies the number with 10"<<endl;
        num *= 10 ;
        cout << num <<endl;
    }

    //function with no return type and no arguments
    void function2(){
        cout<<"this function doesn't have any return type and no arguments ,it only print the statement"<<endl;
    }

     //function with return type and no arguments
     int function3(){
        cout<<"this function have return type but doesn't have arguemnet ,it returns the sum of num1 and num2 declared in the class "<<endl;
        return int(num1+num2);
     }

     //function with return type and an argument
     float function4(int n, float f){
        cout<<"this function have return type and also have arguemnet ,it takes one integer and one floating value as argument and returns their multiplication ."<<endl;
        return n*f;
     }
     

};
int main(){
    Mathematics ob(20,8.5);
    ob.function1(ob.num1);
    ob.function2();
    cout<<ob.function3()<<endl;
    cout<<ob.function4(256,8.3)<<endl;
}