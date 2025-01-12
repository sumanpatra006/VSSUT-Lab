#include <iostream>
using namespace std;
class Feet;

class Inches {
private:
    int inches;
public:
    Inches(int in = 0) : inches(in) {}

    int getInches() const {
        return inches;
    }
    void setInches(int in) {
        inches = in;
    }
    operator Feet();
    void display() const {
        cout << "Inches: " << inches << endl;
    }
};

class Feet {
private:
    int feet;   
    int inches;   

public:
    Feet(int ft = 0, int in = 0) : feet(ft), inches(in) {}
    int getFeet() {
        return feet;
    }
    int getInches() {
        return inches;
    }
    void setFeet(int ft, int in) {
        feet = ft;
        inches = in;
    }
    Feet(const Inches& inObj) {
        feet = inObj.getInches() / 12;         
        inches = inObj.getInches() % 12;        
    }
    operator Inches() {
        return Inches(feet * 12 + inches);     
    }

    void display() const {
        cout << "Feet: " << feet << " Feet, " << inches << " Inches" << endl;
    }
};

Inches::operator Feet() {
    return Feet(inches / 12, inches % 12);
}

int main() {
    Inches inchObj(30);

    Feet feetObj = inchObj; 
    feetObj.display();     

    Inches inchObj2 = feetObj; 
    inchObj2.display();   

    Feet feetObj2(3, 9);
    feetObj2.display();

    Inches inchObj3 = feetObj2; 
    inchObj3.display(); 

    return 0;
}
