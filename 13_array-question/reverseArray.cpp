#include<iostream>
#include<vector>
using namespace std;

// void reverseArray(int arr[],int size) {

//     int s = 0;
//     int e = size - 1;
//     while(s<=e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }

    
// }
// void printArray(int arr[],int size){
//     for(int i =0;i<size;i++){
//         cout<<arr[i];
//     }
//     cout<<endl;
// }


// int main () {

//     int arr[4]={1,2,3,4};
//     int size= 4;
// reverseArray(arr,size);
// printArray(arr,size);
//     return 0;
// 

vector<int> reverse(vector<int>v){
    
    int s= 0;
    int e=  v.size()-1;
  while(s<=e){
    swap(v[s],v[e]);
    s++;
    e--;
  }

}
void print(vector<int> v) {
      for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {

    vector<int> v;

    v.push_back(11);
     v.push_back(7);
      v.push_back(3);
       v.push_back(12);
        v.push_back(4);

        vector<int> ans = reverse(v);
        
    print(ans);

    return 0;
}