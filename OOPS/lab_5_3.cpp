#include <iostream>
using namespace std;

class ObjectCounter {
private:
    static int count;

public:
    ObjectCounter() {
        count++;
    }
    static int getObjectCount() {
        return count;
    }
};

int ObjectCounter::count = 0;

int main() {
    ObjectCounter obj1;  
    ObjectCounter obj2;
    ObjectCounter obj3;
    cout << "Total number of objects created: " << ObjectCounter::getObjectCount() << endl;

    return 0;
}