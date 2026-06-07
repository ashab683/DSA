#include<iostream>
 using namespace std;

 bool isPrime(int n){
    if(n%2!=0){
        return 1;
    }
    return 0;
 }
 int main() {
int n;
 cin>>n;

cout<<isPrime(n)<<endl;
    return 0; 
 }