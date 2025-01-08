//wap to create a financial calculator to calculate the profit of a user based om given principle amount , interest rate and time period in months. From the given data calculate the user profit using simple interest and compound interest .

#include<iostream>
#include<math.h>
using namespace std;

class Calculator {
private:
    int principleAmnt;
    float interestRate;
    int timePeriod;
public:
    void setValues(int p, float i, int t){
        principleAmnt = p;
        interestRate = i;
        timePeriod = t;
    }
    void profit(){
        float si,ci;
        timePeriod = timePeriod/12;
        si = (principleAmnt * interestRate * timePeriod)/100;
        ci = principleAmnt * pow((1 + interestRate),timePeriod);
        cout << "Profit in simple interest : "<< si << endl;
        cout << "Profit in compound interest : "<< ci << endl;
    }
};

int main(){
    int principle,time;
    float rate;
    cout<<"Enter the principle amount : ";
    cin>>principle;
    cout<<"Enter the interest rate : ";
    cin>>rate;
    cout<<"Enter the time period : ";
    cin>>time;
    Calculator obj1;
    obj1.setValues(principle,rate,time);
    obj1.profit();
}