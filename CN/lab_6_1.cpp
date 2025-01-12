#include <iostream>
using namespace std;
#define constant 0.5

#define Area(base, height) (constant * (base) * (height))

int main(){
    float base;
    cout << "enter base : " << endl;
    cin >> base;
    
    float height;
    cout << "enter height : " << endl;
    cin >> height;

    float area = Area(base, height);

    cout << "Base: " << base << endl;
    cout << "Height: " << height << endl;
    cout << "Area : " << area << endl;

    return 0;
}