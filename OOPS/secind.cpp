#include<iostream>
#include<cmath>
using namespace std;

class quadraticEquation{
    public :
    double a,b,c;
    void input(){
        cout<<"Enter the coefficients of a quadratic equation ax^2+bx+c=0 respectively : "<<endl;
        cin>>a>>b>>c;
    }
    void outputAnswer(){
        double result1,result2;
        // cout<< "the quadratic equation is : " <<a<<"x^2 + "<<b<<"x + "<<c <<" = 0 ";
        if((b*b)-4*a*c < 0){
            cout<<"the results are imaginary number"<<endl;
            double temp = sqrt(4*a*c - b*b) ;
            cout<< "result 1 is : " << -b/(2*a) << "+" << temp/(2*a) << "i" << endl;
            cout<< "result 1 is : " << -b/(2*a) << "-" << temp/(2*a) << "i"<<endl;

        }else if(b*b == 4*a*c){
            result1=result2= (-b)/(2*a) ;
            cout<<"result is : " << result1 << "," << result2 ; 
        }
        else{
            result1 = (-b- sqrt(b*b - 4*a*c))/(2*a);
            result2 = (-b+ sqrt(b*b - 4*a*c))/(2*a);
            cout<<"results are : "<<result1 << "," << result2 ;
        }
    }
};
int main(){
    quadraticEquation operation;
    operation.input();
    operation.outputAnswer();
}