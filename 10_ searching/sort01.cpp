#include<iostream>
using namespace std;

void sortZeroOne(int arr[],int size){

    int i = 0;
    int j = size - 1;
    while(i<j){
    
        if(arr[i] == 1 && arr[j]==0){
            swap(arr[i],arr[j]);
        }
        else if (arr[i]==0 && arr[j]==1){
            i++;
            j--;
        }
    }





    

}

void printArray(int arr[],int size){
for(int i =0;i<size;i++){
    cout<<arr[i];
}
cout<<endl;
}

int main () {

    int arr[6] = {0,1,0,1,0,1};
    int size = 6;

   sortZeroOne(arr,size);
   printArray(arr,size);


    return 0;
}
