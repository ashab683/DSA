#include<iostream>
using namespace std;


bool isPossible(int arr[],int size,int student,int mid){

    int studentCount = 1;
    int pageSum = 0;

    for(int i =0; i<size;i++){
        if(pageSum + arr[i]<=mid){
           pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>student || arr[i]>mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}



int allocateBook(int arr[],int size,int student){
int s = 0;
int sum = 0;
for(int i =0;i<size;i++){
    sum +=arr[i];
}
int e = sum;
int ans = -1;
int mid = s + (e-s)/2;

while(s<=e){

    if(isPossible(arr,size,student,mid)){
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

    int arr[4] = {10,20,30,40};
    int size = 4;
    int student = 2;

cout<<allocateBook(arr,size,student);


    return 0;
}