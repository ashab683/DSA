#include<iostream>
using namespace std ;
#include <algorithm>
#include<string>

bool isPalindrome(string a){
     reverse(a.begin(),a.end());

     return true;
}
 
int main () {

// reverse a string 

// string str = "ashab";

// reverse(str.begin(),str.end());
// cout<<str<<endl;
//check palindrome

// string a = "level";

// if(isPalindrome(a)){
//  cout<<"string is palindrome";

// }
// else{
//     cout<<"string is not palindrome"<<endl;
// }

// count vowel and consonant
string c;
cin>>c;
int vowel = 0;
int consonant = 0;

for(int i = 0;i<=c.length();i++){
    char ch = tolower(c[i]);

    if(ch=='a' || ch == 'e'|| ch == 'i' || ch == 'o' || ch == 'u'){
        vowel++;
    }
    else if(ch>='a' && ch<='z'){
consonant++;
    }
}
  cout << "Vowels: " << vowel << endl;
    cout << "Consonants: " << consonant << endl;

    return 0;
}