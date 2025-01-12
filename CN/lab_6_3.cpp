#include <iostream>
using namespace std;

class Sample {
private:
    int num;
public:
    Sample(int v = 0) : num(v) {}

    Sample operator--() {
        --num;
        return num;
    }

    Sample operator--(int) {
        num--;
        return num;
    }

    void display(){
        cout << "Value : " << num << endl;
    }
};

int main() {
    Sample obj(10);

    cout << "Initial value: ";
    obj.display();

    --obj; 
    cout << "After prefix decrement: ";
    obj.display();

    obj--; 
    cout << "After postfix decrement: ";
    obj.display();

    return 0;
}