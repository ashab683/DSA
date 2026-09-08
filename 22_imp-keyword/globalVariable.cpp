#include<iostream>
using namespace std;

int score = 15;//global variable


void a(int& i)//reference variable
{
    cout<<score<<"in a"<<endl;

    char ch = 'a';
    cout<<i<<endl;
}
void b(int& i)//reference variable
{
    cout<<score<<"in b"<<endl;
    cout<<i<<endl;
}

int main()  {

cout<<score<<"in main"<<endl;
int i = 5;//local variable
a(i);
b(i);



    return 0;
}