#include<iostream>
using namespace std;

int prinCount(){
    for(int i = 1;i<=100;i++){
        cout<<i<<endl;
    }
}

int simpleInterest(int p,int r,int t){
    return (p*r*t)/100;

}

int primeNUmber(int n){
for(int i = 1;i<=n;i++){
  if(n%i==0){
    return false;
  }
  return true;
}
}

int eligibleForVoting(int age){
      if(age>=18){
         return 0; 
    }
   
      else{
return 1;        
      }
}

int main() {

    // printCount();

   int ans =  simpleInterest(20,45,60);
   cout<<"simple interest:"<<ans<<endl;
int prime = primeNUmber(1);
cout<<prime<<endl;

int criteria = eligibleForVoting(16);
cout<<criteria;

    return 0;

}