#include<iostream>
using namespace std ;

class Base{
public:
    void function1(){
        cout<<"This is the function of base class"<<endl;
    }
};

class Derived : public Base{
public:
    void function2(){
        cout<<"This is the function of derived class inherited from base class"<<endl;
    }
};

int main(){
    Derived obj1;
    obj1.function1();
    obj1.function2();
    return 0;
}