#include<iostream>
using namespace std;

int main() {

    // pointer to int is created to some garbage address

// int *p = 0;
// cout<<*p<<endl; 

// int i = 5;
// int *q = &i;
// cout<<q<<endl;
// cout<<*q<<endl;

// int *p =0;
// p = &i;

// cout<<p<<endl;
// cout<<*p<<endl;

int num = 5;

int a = num;

a++;
cout<<num<<endl;
cout<<a<<endl;

int *p = &num;
cout<<"before"<<num<<endl;
(*p)++;
cout<<"after"<<num<<endl;
//copying a pointer
int *q = p;
cout<<p<<"-"<<q<<endl;
cout<<*p<<"-"<<*q<<endl;

//imp concept

int i = 3;
int *t = &i;
cout<<(*t)++<<endl;

    return 0;
}