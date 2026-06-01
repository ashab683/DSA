#include<iostream>
using namespace std;

// void printCounting(){
//     for(int i=1; i<=5;i++){
//         cout<<i<<" "<<endl;
//     }
// }
// int sum(int a,int b){
//     int totalSum = a + b;
//     return totalSum;
// }
// void printMyName(){
//     cout<<"mohd ashab"<<endl;
// }

int getMul(int x,int y,int z){
  int result = x*y*z; 
  return result;
}
void printNumTenTimes(int num){
    for(int i = 1;i<=10;i++){
        cout<<num*i<<endl;
    }
}
int convertIntoCelcius(int far){
    int celcius = (far-32)*5/9;
    return celcius;
}

int main() {
// printCounting();
// int ans = sum(3,4)
// cout<<ans<<endl;
// printMyName();
int mul = getMul(2,3,4);
cout<<mul<<endl;
printNumTenTimes(5);    
int far = 32;
int ans = convertIntoCelcius(far);
cout<<ans<<endl;
return 0;
}