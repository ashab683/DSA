#include<iostream>
#include<queue>
using namespace std;

int main()  {

queue<string> q;

    q.push("mohd");
q.push("ashab");

cout<<"top element-> "<<q.front()<<endl;

q.pop();
cout<<"top element-> "<<q.front()<<endl;

cout<<"size of queue "<<q.size()<<endl;



    return 0;
}