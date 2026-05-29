#include<iostream>
using namespace std;

void solve(int a){
    cout<<"inside function"<<a<<endl;
    a++;
    cout<<"inside function"<<a<<endl;
    
}

int main()  {

int a = 5;
cout<< "inside main"<<a<<endl;
solve(a);
cout<<"inside main"<<a<<endl;



   return 0; 
}