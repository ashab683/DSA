#include<iostream>
using namespace std;
// sum of all element of an array

int getSum(int arr[],int size){
    int Sum = 0;
    for(int i =0;i<size;i++){
        Sum = Sum+arr[i];
    }
   return Sum;
}

int main()  {

    int arr[5]={1,2,3,4,5};
    int size = 5;
cout<<"sum is :"<<getSum(arr,size)<<endl;

    return 0 ;
}