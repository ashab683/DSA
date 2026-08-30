#include<iostream>
using namespace std;

//to print row wise sum
void printSum(int arr[][3],int i,int j){
    for(int i =0;i<3;i++){
        int sum = 0;
    for(int j = 0;j<3;j++){
        sum+=arr[i][j];
    }
    cout<<sum<<" ";
 }
}
int largestRowSum(int arr[][3],int i,int j){

    int maxi = INT8_MIN;
    int rowIndex = -1;

  for(int i =0;i<3;i++){
        int sum = 0;
    for(int j = 0;j<3;j++){
        sum+=arr[i][j];
    }
   if (sum>maxi){
    maxi = sum;
    rowIndex = i;
   }
 }
 cout<<"the maximum sum is "<<maxi<<endl;
 return i;
}

int main () {

 int arr[3][3];

 //taking input->row wise input
cout<<"enter the element"<<endl;
 for(int i =0;i<3;i++){
    for(int j = 0;j<3;j++){
        cin>>arr[i][j];
    }
 }


  //print
 for(int i =0;i<3;i++){
    for(int j = 0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }
//  cout<<"sum"<<endl;
// printSum(arr,3,3);
int ansIndex = largestRowSum(arr,3,3);
cout<<"max row is at index-> "<<ansIndex<<endl;


    return 0;
}