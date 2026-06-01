#include<iostream>
using namespace std;

class student{
    public:
    //properties / data member 
    int age;
    int height;
    int weight;
    string name;
    //behaviors / member fuction
    void running () {
        cout<<"i am running "<<endl;
    }
    void studying() {
        cout<<name<<"is studying"<<endl;
    }

};


int main() {
// cout<<"sizeof(student)"<<endl;

// object creation
student s1;
s1.age = 19;
s1.name = "ashab";
s1.weight = 80;
s1.height = 180;

s1.running();

//dynamic way
student* s = new student();
(*s).age = 19;
(*s).weight = 97;

    return 0;
}