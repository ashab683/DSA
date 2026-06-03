#include<iostream>
using namespace std;
 int main () {

    // prime or not 

int n;
cin>>n;

bool isPrime = 1;

for(int i = 2;i<n;i++){
    //rem = 0,not a prime no
    if(n%i==0){
    //   cout<<"not a prime no"<<endl;
      isPrime = 0;
      break;
    }
    
 }
if(isPrime==0){
    cout<<"not a prime no"<<endl;
}
else{
    cout<<"prime number"<<endl;
}



    return 0;
 }