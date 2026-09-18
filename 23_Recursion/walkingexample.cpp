#include<iostream>
using namespace std;


void reachHome(int source,int destination){

    cout<<"source"<<source<<endl<<"destination"<<destination<<endl;
    //base case
    if(source==destination){
        cout<<"pahuch gya"<<endl;
        return;
    }
    
    //processing->ek step aage bdh jao
    source++;
    //recursive call

    reachHome(source,destination);
}

int main()  {

int destination = 10;
int source = 1;

reachHome(source,destination);



    return 0;
}