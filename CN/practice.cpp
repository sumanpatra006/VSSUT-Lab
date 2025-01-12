#include<iostream>
#include<string.h>
using namespace std;

class Teacher{
public:
    string name ;
    string post;
    int date;
    int hours;
    int no_rp;
    int no_proj;
    static int no_teacher;

    Teacher(){
        cout<<"enter name of teacher : ";
        getline(cin,name);
        cout<<"enter post of teacher : ";
        getline(cin,post);
        cout<<"Enter date of joining : ";
        cin>>date;
        cout<<"Enter hours of teaching : ";
        cin>>hours;
        cout<<"Enter no of research papers : ";
        cin>>no_rp;
        cout<<"Enter nuberof projects : ";
        cin>>no_proj;
        no_teacher ++;
    }

    static void showTeacher(){
        cout<<"number teachers are : " << no_teacher;
    }
};

int Teacher :: no_teacher = 0;

int main(){
    Teacher t1,t2,t3;
    Teacher::showTeacher();
}