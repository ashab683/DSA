#include<iostream>
using namespace std;

void alternateSwap(int arr[],int size){
    for(int i =0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
          
        }
    }
}
 void printArray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
}

int main() {

int arr[8] = {1,2,3,4,5,6,7,8};
int size = 8;
alternateSwap(arr,size);
printArray(arr,size);
    return 0;
}