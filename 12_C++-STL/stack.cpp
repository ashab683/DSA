#include<iostream>
#include<stack>
using namespace std;

int main()  {

stack<string> s;

s.push("mohd");
s.push("ashab");

cout<<"top element-> "<<s.top()<<endl;

s.pop();
cout<<"top element-> "<<s.top()<<endl;

cout<<"size of stack "<<s.size()<<endl;

return 0;
}