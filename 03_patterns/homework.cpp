#include<iostream>
using namespace std;


int main() {

int n;
cin >>n;
int i = 1;
while(i<=n){
    int j =1;
    while(j<=n-i+1){
        cout<<j;
        j++;
    }
    int star = 2*i-2;
    while(star){
        cout<<"*";
        star--;
    }
int lastTriangle = n-i+1;
while(lastTriangle){
    cout<<lastTriangle;
    lastTriangle--;
}



    cout<<endl;
    i++;
}

    return 0;
}