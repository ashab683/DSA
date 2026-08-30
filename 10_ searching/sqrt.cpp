#include<iostream>
using namespace std;

int getSqrt(int num){
int s= 0;
int e = num;
int mid = s + (e-s)/2;
int ans = 0;
for(int i =0;i<num;i++){
    if(mid*mid==num){
        return mid;
    }
    else if(mid*mid>num){
     
     e = mid - 1;
    }
    else{
        ans = mid ;
        s = mid + 1;
    }
    mid = s + (e-s)/2;
}
}

int main() {

    int num;
    cout<<"enter the num "<<endl;
    cin>>num;

cout<<getSqrt(num);


    return 0;
}