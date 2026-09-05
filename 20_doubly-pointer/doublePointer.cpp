#include<iostream>
using namespace std;

void update(int **p2){
    // p2 = p2 + 1;
    //kusch change hoga -> no
    // *p2 = *p2+1;
     //kusch change hoga ->yes
    // **p2 = **p2 + 1;
     //kusch change hoga ->yes
}


int main () {
 
int i = 5;
int* p = &i;
int** p2 = &p;
// cout<<"address of i "<<&i<<endl;
// cout<<"printing p "<<p<<endl;
// cout<<"address of p "<<&p<<endl;

// cout<<*p2<<endl;

// // accessing of value of i by diff method
// cout<<i<<endl;
// cout<<*p<<endl;
// cout<<**p2<<endl;

// cout<<endl;
// // accessing of value of p by diff method
// cout<<&i<<endl;
// cout<<p<<endl;
// cout<<*p2<<endl;

// cout<<endl;

// cout<<&p<<endl;
// cout<< p2<<endl;

// cout<<"before"<< i <<endl;
// cout<<"before"<< p <<endl;
// cout<<"before"<< p2 <<endl;
// update(p2);
// cout<<"after"<<i<<endl;
// cout<<"after"<<p<<endl;
// cout<<"after"<<p2<<endl;

    return 0;
}