#include<iostream> 
using namespace std;

int main () {

int a ,b;
cout<<"enter the value of  a and b "<<endl;
cin>>a>>b;
char operation;
cout<<"enter the operator"<<endl;
cin>>operation;

switch(operation) {

    case '+': cout<< a + b<<endl;
    break;
    case '-': cout<<a-b<<endl;
    break;
    case '*': cout<<a*b<<endl;
    break;
    case '/': cout<<a/b<<endl;
    break;
    case '%': cout<<a%b<<endl;
    break;
}



    return 0;
}