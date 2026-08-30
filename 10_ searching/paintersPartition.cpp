#include<iostream> 
using namespace std;
bool isPossible(int arr[],int size,int painters,int mid){

    int paintersCount= 1;
    int bordsSum = 0;

    for(int i =0; i<size;i++){
        if(bordsSum + arr[i]<=mid){
           bordsSum+=arr[i];
        }
        else{
            paintersCount++;
            if(paintersCount>painters || arr[i]>mid){
                return false;
            }
            bordsSum = arr[i];
        }
    }
    return true;
}

int paintersPartition(int arr[],int size,int painters){
int s = 0;
int sum = 0;
for(int i =0;i<size;i++){
    sum +=arr[i];
}
int e = sum;
int ans = -1;
int mid = s + (e-s)/2;

while(s<=e){

    if(isPossible(arr,size,painters,mid)){
        ans = mid;
        e = mid - 1;
    }
    else{
        s = mid + 1;

    }
    mid = s+(e-s)/2;
}
return ans;


}



int main()  {

int arr[4] = {5,5,5,5};
int size = 4;
int painters = 2;

cout<<paintersPartition(arr,size,painters);



    return 0;
}