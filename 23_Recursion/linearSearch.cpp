#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    bool ans = search(arr+1,size-1,key);
    return ans;
} 


int main() {


int arr[5] = {3,5,1,2,6};
int size = 5;
int key = 2;
bool ans = search(arr,size,key);
cout<<ans<<endl;


    return 0;
}