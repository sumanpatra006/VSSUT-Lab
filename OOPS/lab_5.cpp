#include <iostream>
using namespace std;

class classA{
private:
    int num;

public:
    void input()
    {
        cout << "Enter a number : " << endl;
        cin >> num;
    }
    friend void increament(classA);
};

void increament(classA a){
    long long sum;
    cout << "Enter your roll number : " << endl;
    cin >> sum;
    sum = sum % 10000;
    cout << "output is : " << a.num + (sum % 1000) << endl;
}

int main(){
    classA A;
    A.input();
    increament(A);
}
