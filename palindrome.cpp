#include<bits/stdc++.h>

using namespace std;
class Solution {
    public:
  bool isPalindrome(string s){
    string name= "";
    for( char ch : s){
        if(isalnum(ch)) {
            name += tolower(ch);
        }
    }
    string kam = name;
    reverse(kam.begin(), kam.end());
    
    if( name == kam){
        return true;
    }
    else{
        return false;
    }

  }
};

// int main(){
//     Solution solver;
    
//     // LeetCode ka wahi solid test case
//     string test = "A man, a plan, a canal: Panama"; 
    
//     if (solver.isPalindrome(test)) {
//         cout << "SUCCESS: Palindrome hai! 🎯" << endl;
//     } else {
//         cout << "FAILED: Palindrome nahi hai! ❌" << endl;
//     }
    
//     return 0;
// }

bool isPalindrome(int n) {
    int original = n;
    int rev=0;
     
    while(n>0){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
        
    }
    return original==rev;

}

 int main() {
    int n;
    cout<<" Enter a Number :";
    cin>>n;
    
    if(isPalindrome(n)) {
        cout<<"Palindrome" <<endl;

    } else {
        cout<<" Not a Palindrome " << endl;
    }
     return 0;
 }