//wap to create student information system to store update and display using appropriate functions. The student information contain student registration number name and cgpa. here in the update function ask the user about which data to be modified and before modifying display the current data.

#include<iostream>
#include<string>
using namespace std;

class StudentInfo {
private:
    int regNo;
    string name;
    float cgpa;

public:
    void setValues(int r, string n, float c) {
        regNo = r;
        name = n;
        cgpa = c;
    }
    void display() const {
        cout << "Student Registration Number: " << regNo << endl;
        cout << "Student Name: " << name << endl;
        cout << "Student CGPA: " << cgpa << endl;
    }
    void update() {
        int choice;
        cout << "Current details of the student:" << endl;
        display();
        cout << "\nWhat would you like to update?" << endl;
        cout << "1. Registration Number" << endl;
        cout << "2. Name" << endl;
        cout << "3. CGPA" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter new Registration Number: ";
                cin >> regNo;
                break;
            case 2:
                cout << "Enter new Name: ";
                getline(cin, name);
                break;
            case 3:
                cout << "Enter new CGPA: ";
                cin >> cgpa;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
};

int main() {
    int number;
    cout << "Enter the number of students: ";
    cin >> number;
    cin.ignore();

    StudentInfo students[number];

    for (int i = 0; i < number; i++) {
        int regNo;
        string name;
        float cgpa;

        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        cout << "Enter Registration Number: ";
        cin >> regNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter CGPA: ";
        cin >> cgpa;

        students[i].setValues(regNo, name, cgpa);
    }
    int choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Display all students" << endl;
        cout << "2. Update a student's information" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < number; i++) {
                    cout << "\nStudent " << i + 1 << " Information:" << endl;
                    students[i].display();
                }
                break;

            case 2:
                int studentIndex;
                cout << "Enter the student number (1 to " << number << ") you want to update: ";
                cin >> studentIndex;
                if (studentIndex >= 1 && studentIndex <= number) {
                    students[studentIndex - 1].update();
                } else {
                    cout << "Invalid student number!" << endl;
                }
                break;

            case 3:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 3);

    return 0;
}
