#include<iostream>
using namespace std;


void print2DArray(int arr[][4],int rowSize,int colSize){
      //printing
      for(int row_index=0;row_index<=rowSize - 1;row_index++){
        for(int col_index = 0;col_index<=colSize-1;col_index++){
            cout<<arr[row_index][col_index]<<" ";
        }
        cout<<endl;
        
      }
}
int main() {
    
    //declaration
// int arr[5][4];

//initialisation

// int arr[2][4] = {{1,2,3,4},
//                 {5,6,7,8}};

//access
// cout<<arr[0][3]<<endl;

int arr [3][4] = {{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12} };
      int row = 3;
      int col = 4;
      

   for(int row_index=0;row_index<=row - 1;row_index++){
        for(int col_index = 0;col_index<=col-1;col_index++){
           cout<<"enter the input for arr["<<row_index<<"]["<<col_index<<"]:";
            cin>>arr[row_index][col_index];
        }
        cout<<endl;
        
      }


      //printing
    //   for(int row_index=0;row_index<=row - 1;row_index++){
    //     for(int col_index = 0;col_index<=col-1;col_index++){
    //         cout<<arr[row_index][col_index]<<" ";
    //     }
    //     cout<<endl;
        
    //   }

    print2DArray(arr,row,col);


return 0;
}