// Write a program to create more than two classes for accessing the data member and member function from its parent class select/imagine a problem where the datas are received from the user using parent data member and use a friend function to perform either modification operation or simply display the result

#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNumber;

public:
    void getStudentDetails() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }

    void displayStudentDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Marks : public Student {
protected:
    int subject1, subject2, subject3;

public:
    void getMarks() {
        cout << "Enter marks for Subject 1: ";
        cin >> subject1;
        cout << "Enter marks for Subject 2: ";
        cin >> subject2;
        cout << "Enter marks for Subject 3: ";
        cin >> subject3;
    }

    void displayMarks() {
        cout << "Marks - Subject 1: " << subject1 << ", Subject 2: " << subject2 
             << ", Subject 3: " << subject3 << endl;
    }

    friend class Result;
};

class Result {
public:
    void displayResult(Marks m) {
        int total = m.subject1 + m.subject2 + m.subject3;
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Marks studentMarks;
    Result result;

    studentMarks.getStudentDetails();
    studentMarks.getMarks();

    cout << "\nStudent Details:\n";
    studentMarks.displayStudentDetails();
    studentMarks.displayMarks();

    cout << "\nResult:\n";
    result.displayResult(studentMarks);

    return 0;
}
