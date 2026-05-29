#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    for(int i =0;i<=3;i++ ){
        cout<<arr[i]<<" ";
        
    }

}

void storeMultipleOf10(int num[],int size){
    int count = 1;
for(int i =0;i<=9;i++){
num[i] = 10*count;
cout << num[i] << " ";
count = count + 1;
}
}
void flipZeroOne(int arr[],int size){
  for (  int i = 0;i<=7;i++){
    if(arr[i]==1){
        arr[i]=0;
    }
    else{
        arr[i] = 1;
    }
  }
 
  
}

int main(){

int arr[] ={1,1,0,0,0,1,0,1};
int size =8;
cout<<"before : " ;
printArray(arr,size);
cout<<endl;
flipZeroOne(arr,size);
cout<<"after: ";
printArray(arr,size);



//     int num[10];
//     int size = 10;
//    storeMultipleOf10(num,size);
   


//     int arr [5] ;
// int size = 5;
// printArray(arr,size);
// int arr [5] = {0};
// int size = 5;
// printArray(arr,size);


//     int arr[] = {10,20,30,40};
//     int size = 4;
// printArray(arr,size);
//declaration
// int arr[11];
// int brr[5] = {1,2,3,4,5};
// int crr[] = {1,2,3,4,5};   

//traverse
// int mulOfTwo [10] = {2,4,6,8,10,12,14,16,18,20};
// for(int i = 0;i<=9;i++){
//     cout<<mulOfTwo[i]<<" ";
// }


// int arr[] = {10,20,30,40,50};
// int sum = 0;
// for(int i = 0;i<=4;i++){
//     sum = sum + arr[i]; 
// }
// cout<<"total sum "<<sum<<endl;





return 0;

}