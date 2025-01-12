#include <iostream>
using namespace std;

class Calculation {
private:
    int value;

public:
    void set(int val) {
        value = val;
    }
    int get(){
        return value;
    }
    Calculation operator+( Calculation temp) {
        Calculation result;
        result.set(value + temp.value);
        return result;
    }
    Calculation operator-( Calculation temp) {
        Calculation result;
        result.set(value - temp.value);
        return result;
    }
    Calculation operator*( Calculation temp) {
        Calculation result;
        result.set(value * temp.value);
        return result;
    }
    Calculation operator/( Calculation temp) {
        Calculation result;
        if (temp.value != 0) {
            result.set(value / temp.value);
        } else {
            cerr << "Error: Division by zero!" << endl;
            result.set(0);
        }
        return result;
    }
    void display(){
        cout << "Value: " << value << endl;
    }
};

int main() {
    Calculation obj1, obj2, obj3, obj4;
    obj2.set(5);
    obj3.set(10);
    obj4.set(30);

    obj1 = obj2 + obj3 / obj4;
    cout << "Result of obj1 = obj2 + obj3 / obj4: ";
    obj1.display();

    obj1 = obj2 * obj3 - obj4;
    cout << "Result of obj1 = obj2 * obj3 - obj4: ";
    obj1.display();

    return 0;
}
