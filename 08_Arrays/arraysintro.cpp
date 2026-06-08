#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i = 0;i<=size;i++){
 cout<<arr[i]<<" "<<endl;    }
}

int main() {

// declaration
// int num [15];

//initialisation
int num[15] = {1,2,3,4,5,6,7,5,6,4,3,5,3,3,5};

// accessing
cout<<num[1]<<endl;

int third[15] = {2,7};
int n = 15;
printArray(third,15);

int thirdSize = sizeof(third)/sizeof(int);
cout<<"size of third is : "<<thirdSize<<endl;

char ch[5] = {'a','b','c','d','e'};
cout<<ch[2]<<endl;

    return 0;
}