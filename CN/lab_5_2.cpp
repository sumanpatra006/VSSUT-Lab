#include<iostream>
using namespace std;

class B;

class A{
    private:
    int a;
    public:
    void input(){
        cout << "Enter a number : " ;
        cin >> a;
        cout <<endl;
    }
    void output(){
        cout<<"value of a is :" << a;
        cout << endl ;
    }
    friend void swap(A &first, B &second);
};

class B{
    private :
    int b;
    public:
    void input(){
        cout << "Enter a number : " ;
        cin >> b;
        cout <<endl;
    }
    void output(){
        cout<<"value of b is : " << b;
        cout << endl ;
    }
    friend void swap(A &first, B &second);
};

void swap(A &first, B &second){
    int temp = first.a;
    first.a = second.b;
    second.b = temp ;
}

int main(){
    A firstClass;
    B secondClass;
    firstClass.input();
    secondClass.input();
    cout << "Before swapping values are"<<endl;
    firstClass.output();
    secondClass.output();
    swap(firstClass,secondClass);
    cout << "After swapping values are"<<endl;
    firstClass.output();
    secondClass.output();

}