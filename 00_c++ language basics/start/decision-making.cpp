#include<iostream>
using namespace std;

int main() {
    // int budget;
    // cout<<"enter your budget"<<endl; 
    // cin>>budget;
    // if(budget>200000){
    //     cout<<"you can buy a bike";
    // } else{
    //     cout<<"you can not buy a bike"<<endl;
    // }

    int marks ;
    cout<<"enter your marks :";
    cin>>marks;
    if(marks>90){
        cout<<"A";
    }
     else if(marks>90){
        cout<<"B";
    }
     else if(marks>60){
        cout<<"C";
    }
     else if(marks>40){
        cout<<"D";
    }
    else{
        cout<<"you failed"<<endl;
    }
    
    return 0;
}