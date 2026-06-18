#include<iostream>
#include<vector>
using namespace std;

int main () {

vector<int> v;
vector<int> a(5,1);
// 5-> size of vector
//1-> initialise all element with 1
vector<int> last(a);
//copy another vector

cout<<"size-> "<<v.capacity()<<endl;

v.push_back(1);
cout<<"size-> "<<v.capacity()<<endl;

v.push_back(2);
cout<<"size-> "<<v.capacity()<<endl;

v.push_back(3);
cout<<"size-> "<<v.capacity()<<endl;
// capacity double hojati h size bhrne pr


cout<<"element at 2nd index "<<v.at(2)<<endl;

cout<<"first element "<<v.front()<<endl;
cout<<"last element "<<v.back()<<endl;

cout<<"befor pop "<<endl;

for(int i : v){
    cout<<i<<" ";
}
cout<<endl;

v.pop_back();
cout<<"after pop "<<endl;
for(int i : v){
    cout<<i<<" "<<endl;
}

cout<<"before clear size "<<v.size()<<endl;
v.clear();
cout<<"after clear size "<<v.size()<<endl;


cout<<endl;

    return 0;
}