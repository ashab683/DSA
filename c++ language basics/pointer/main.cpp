#include<iostream>
using namespace std;

int main() {

int num = 50;
cout<<"printing address of number"<<&num<<endl;
int *ptr = &num;
cout<<num<<endl;
cout<<&num<<endl;
cout<<ptr<<endl;
cout<<&ptr<<endl;
cout<<*ptr<<endl;
(*ptr)++;
cout<<num<<endl;

// int *ptr = 0;
// cout<<*ptr<<endl;

    return 0;
}