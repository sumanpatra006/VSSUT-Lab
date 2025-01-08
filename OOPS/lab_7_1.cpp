#include <iostream>
using namespace std;

class Multiplication {
private:
    int value;
public:
    void setValue(int val) {
        value = val;
    }
    Multiplication operator*(Multiplication other) {
        Multiplication result;
        result.setValue(value * other.value);
        return result;
    }
    void display(){
        cout << "Value: " << value <<endl;
    }
};

int main() {
    Multiplication obj1, obj2;
    obj1.setValue(7);
    obj2.setValue(5);
    Multiplication result = obj1 * obj2;
    result.display();

    return 0;
}
