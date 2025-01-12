// Write a program to implement function overloading to perform different task using same function signature through the implementation of different classes (function overriding)

#include <iostream>
#include <string>
using namespace std;

class Task {
public:
    virtual void performTask() {
        cout << "Performing a general task." << endl;
    }
};

class CleaningTask : public Task {
public:
    void performTask() override {
        cout << "Performing a cleaning task: Cleaning the room." << endl;
    }
};

class CookingTask : public Task {
public:
    void performTask() override {
        cout << "Performing a cooking task: Preparing dinner." << endl;
    }
};

class StudyingTask : public Task {
public:
    void performTask() override {
        cout << "Performing a studying task: Reading a book." << endl;
    }
};

int main() {
    Task* task;

    CleaningTask cleaning;
    CookingTask cooking;
    StudyingTask studying;

    task = &cleaning;
    task->performTask();

    task = &cooking;
    task->performTask();

    task = &studying;
    task->performTask();

    return 0;
}
