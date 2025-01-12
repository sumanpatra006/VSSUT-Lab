#include<iostream>
using namespace std;

class Tree{
    public:
        void tree(){
            cout<<"This is a tree"<<endl;
        }
};

class Tulsi:public Tree{
    public:
        void character(){
            cout<<"This is herbal plant with many benefits"<<endl;
        }
};

class Mango:public Tree{
    public:
        void character(){
            cout<<"This is a fruit plant that is easy to grow"<<endl;
        }
};

int main(){
    Tulsi t1;
    t1.tree();
    t1.character();
    Mango m1;
    m1.tree();
    m1.character();

    return 0;
}