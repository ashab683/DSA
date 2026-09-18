#include<iostream>
using namespace std;

int climbStair(int stairs){

    //base case
    if(stairs<0){
        return 0;
    }
    if(stairs==0){
        return 1;
    }
    // RR
    int ans = climbStair(stairs-1) + climbStair(stairs-2);
cout<<ans;
//runtime error
}

int main() {

    int stairs = 10;



    climbStair(stairs);

    return 0;
}