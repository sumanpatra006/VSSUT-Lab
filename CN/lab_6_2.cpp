#include <iostream>
using namespace std;

class Sample {
public:
    int num;
    Sample(int val){
        num = val;
        cout << "Constructor: Value of num is initialized to " << num << endl;
    }
    void show() {
        cout << "Member Function: Value of num is " << num << endl;
    }
    inline void inlineDisplay() {
        cout << "Inline Function: Value of num is " << num << endl;
    }
};

int main() {
    int num;
    cout<<"Enter any numerical value : ";
    cin>>num;
    Sample ob1(num);
    ob1.show();
    ob1.inlineDisplay();

    return 0;
}