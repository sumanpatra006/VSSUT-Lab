//WAP to implement call by value , call by address and call by reference 

#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollNumber;

    Student(string n,int r){
        name = n;
        rollNumber = r;
    }
};

//call by value
void change(Student s){
    s.rollNumber = 10;
    // cout<<s.rollNumber<<endl;
}

//call by address
void changeAdd(Student& s){
    s.rollNumber = 6;
}

//call by reference
void changeRef(Student* p){
    p->rollNumber = 20;
}

int main(){
    Student s1("suman",24);
    cout<<s1.rollNumber<<endl;
    change(s1);
    cout<<s1.rollNumber<<endl;
    changeAdd(s1);
    cout<<s1.rollNumber<<endl;
    Student* p1 = &s1;
    // cout<<p1;
    changeRef(p1);
    cout<<s1.rollNumber<<endl;

}