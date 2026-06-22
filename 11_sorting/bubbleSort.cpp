#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i =1;i<n;i++){
        //for round 1 to n-1
        for(int j=0;j<n-i;j++){
            if(arr[j]<arr[j+1]){
                //arr[j]>arr[j+1] for ascending order
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}


int main()  {

    int arr[6] = {10,1,7,6,14,9};
    int n = 6;
bubbleSort(arr,n);
printArray(arr,n);

    return 0;
}