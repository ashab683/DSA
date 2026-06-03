#include<iostream>
using namespace std;


int main() {

int n;
cin >>n;
int i = 1;
//space print 
while(i<=n){
    int space = n-i;
    while(space){
        cout<<" ";
        space--;
    }
    //star print
    int j =1;
    while(j<=i){
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
}


    return 0;
}