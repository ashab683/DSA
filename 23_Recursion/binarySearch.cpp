#include<iostream>
using namespace std;

void print(int arr[],int s  ,int e){
    for(int i = s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarySearch(int arr[],int s,int e,int key){
    print(arr,s,e);
    //bc
    //element not found
    if(s>e){
        return false;
    }
   
    int mid = s + (e-s)/2;
     //element found
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
      return binarySearch(arr,mid+1,e,key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }
}



int main()  {

int arr[5] = {2,5,6,8,16};
int size = 5;
int key = 16;

cout<<"present or not->"<<binarySearch(arr,0,4,key)<<endl;

    return 0;
}