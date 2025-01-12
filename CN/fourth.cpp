// #include <iostream>
// using namespace std;

// int area(int l, int b){
//     return l * b;
// }

// int area(int s){
//     return s * s;
// }

// float area(float r){
//     return 3.14 * r * r;
// }

// float area(float b, float h){
//     return 0.5 * b * h;
// }

// void calculateArea(){

//     int caseNo;
//     cout << "Enter a number to calculate the area of different shapes :" << endl;
//     cout << "Enter 1 for rectangle " << endl
//          << "Enter 2 for square" << endl
//          << "Enter 3 for circle" << endl
//          << "Enter 4 for triangle" << endl;
//     cin >> caseNo;
//     switch (caseNo)
//     {
//     case 1:
//         cout << "you are going to calculate the area of rectangle" << endl;
//         int breadth, length;
//         cout << "Enter length of the rectangle" << endl;
//         cin >> length;
//         cout << "Enter breadth of the rectangle" << endl;
//         cin >> breadth;
//         cout << "The area of the rectangle is : ";
//         cout << area(length, breadth)<<endl;
//         break;

//     case 2:
//         cout << "you are going to calculate the area of square" << endl;
//         int side;
//         cout << "Enter side of the square" << endl;
//         cin >> side;
//         cout << "The area of the square is : ";
//         cout << area(side)<<endl;
//         break;

//     case 3:
//         cout << "you are going to calculate the area of circle" << endl;
//         float radius;
//         cout << "Enter radius of the circle" << endl;
//         cin >> radius;
//         cout << "The area of the circle is : ";
//         cout << area(radius)<<endl;
//         break;

//     case 4:
//         cout << "you are going to calculate the area of triangle" << endl;
//         float base, height;
//         cout << "Enter height of the rectangle" << endl;
//         cin >> height;
//         cout << "Enter base of the rectangle" << endl;
//         cin >> base;
//         cout << "The area of the rectangle is : ";
//         cout << area(base, height)<<endl;
//         break;

//     default:
//         cout << "you must enter a number between 1-4" << endl;
//         break;
//     }
// }

// void checkFunction(){
//     int isWant = 1;
//     while (isWant){
//         char check;
//         cout << "Do you want to continue ? Enter y/n : ";
//         cin >> check ;
//         cout<<endl;
//         if (check == 'y'){
//             calculateArea();
//         }
//         else if (check == 'n'){
//             break;
//         }
//         else{
//             cout << "you have to enter y or n" << endl;
//             checkFunction();
//         }
//     }
// }
// int main(){   
//     calculateArea();
//     checkFunction();
// }


#include<iostream>
using namespace std;

class Parent{
    public:
        void area(){
            cout<<"Area is: "<<endl;
    }
};
class Square: public Parent{
    public:
        void area(){
            double side;
            cout<<"Enter side: ";
            cin>>side;
            cout<<"Area is: "<<side*side<<endl;
    }
};
class Rectangle: public Parent{
    public:
        void area(){
            double length, breadth;
            cout<<"Enter length and breadth: ";
            cin>>length>>breadth;
            cout<<"Area is: "<<length*breadth<<endl;
    }
};
class Circle: public Parent{
    public:
        void area(){
            double radius;
            cout<<"Enter radius: ";
            cin>>radius;
            cout<<"Area is: "<<0.5*radius*radius<<endl;
    }
};
class Triangle: public Parent{
    public:
        void area(){
            double height, base;
            cout<<"Enter height and base: ";
            cin>>height>>base;
            cout<<"Area is: "<<0.5*height*base<<endl;
    }
};

int main(){

    Parent p;
    Square s;
    Rectangle r;
    Circle c;
    Triangle t;

    int wish = 1;

    while(wish){

         cout<<"What do you want to find?"<<endl;
         cout<<"1. Area of Circle"<<endl<<"2. Area of square"<<endl<<"3. Area of Rectangle"<<endl<<"4. Area of Triangle"<<endl;
         int input;

    cin>>input;

        switch (input)
    {
    case 1 : {
        c.area();
    }
        break;
    case 2 : {
        s.area();
    }
        break;
    case 3 : {
        r.area();
    }
        break;
    case 4 : {
        t.area();
    }
        break;
    default:
    cout<<"invalid input"<<endl;
        break;
    }
    cout<<"Do you want to continue? 1 or 0"<<endl;
    cin>>wish;

    }
    return 0;
    
}