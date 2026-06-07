#include<iostream>
 using namespace std;

 bool isEvenOdd(int n){
    if(n%2==0){
        return true;
    }
    return false;
 }

 int main() {
int n;
cin>>n;
   cout<< isEvenOdd(n);

    return 0;
 }