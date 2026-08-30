#include<iostream>
using namespace std;

int main() {

    int num = 5;
    cout<<num<<endl;

    //address of an operator - &
cout<<"address of operator->"<<&num<<endl;

int *ptr = &num;
cout<<"value is: "<<*ptr<<endl;

double d = 3.4;
double *p2 = &d;

cout<<"address is : "<<p2<<endl;
cout<<"value is : "<<*p2<<endl;

cout<<"size of int is"<<sizeof(num)<<endl;
cout<<"size of pointer is"<<sizeof(p2)<<endl;
    
    return 0;
}