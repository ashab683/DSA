#include<iostream>
using namespace std;
#include <cstring>
//finding length
int getLength(char arr[]) {
    int count = 0;
    int index = 0;
    while(arr[index] != '\0'){
        count++;
        index++;
    }
    return count;
}

// void conCatArrays(char a[],char b[]){

// int aIndex = getLength(a);
// int bIndex = 0;

// while(b[bIndex] !='\0'){
//     //start copying 
//     a[aIndex] = b[bIndex];
//     aIndex++;
//     bIndex++;
// }
// //end a string with null character
// a[aIndex]= '\0';


// }
void copyArray(char actualArr[],char copyarr[]){

int aIndex = 0;
int bIndex = 0;

while(actualArr[aIndex] !='\0'){
    copyarr[bIndex] = actualArr[aIndex];
    aIndex++;
    bIndex++;

}
copyarr[bIndex] = '\0';

}

bool compareArray(char a[],char b[]){
    int aIndex = 0;
    int bIndex = 0;
    int aLength = getLength(a);
    while(aIndex<=aLength){
        if(a[aIndex] != b[bIndex]){
            return false;
        }
        else{
            aIndex++;
            bIndex++;
        }
    }
    return true;

}



int main () {
    //using library


  char actual[100] = "ashab";
    char ans[100];
strcpy(ans,actual);
cout<<ans<<endl;
cout<<"length of actual char "<<strlen(actual)<<endl;
if (strcmp(actual,ans) == 0){
    cout<<"char array are same "<<endl;

} else{
    cout<<"char array are not same "<<endl;
}


// char arr [] = "ashab";
// char brr [] = "ashab";

// cout<<compareArray(arr,brr)<<endl;


    // char actual[100] = "ashab";
    // char ans[100];

    // copyArray(actual ,ans);
    // cout<<ans<<endl;



    // char a[50] ="ashab" ;
    // char b[50] = "procoddr";
    // conCatArrays(a,b);
    // cout<<a<<endl;
    // char arr[] ="ashab";
    // cout<<getLength(arr)<<endl;

    //declaration
    // char arr[10];

    // initialisation

// char arr[10] = "ashab";
// cout<<arr[5]<<endl;

// int arr[4] = {1,2,3,4};
// cout<<arr<<endl;

// char brr[6 ] = "ashab";
// cout<<brr<<endl;




    return 0;
}

