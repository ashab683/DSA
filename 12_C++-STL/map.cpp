#include<iostream> 
#include<map>
using namespace std;

int main()  {

    map<int,string> m;
    m[1] = "mohd";
    m[2] = "ashab";

    m.insert({5,"bheem"});

    for(auto i:m){
        cout<<i.first<<endl;
    }
auto it = m.find(5);
for(auto i = it;i!=m.end();i++){
    cout<<(*i).first<<endl;
}
    return 0;
}