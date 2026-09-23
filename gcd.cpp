#include<bits/stdc++.h>

using namespace std;

int gcd(int a , int b){
    while(a>0 && b>0){
        if (a>b)
        a=a%b;
        else b=b%a;
    }
    if (a==0)  return b;
    return a;
};

int main() {
    int num1, num2;
    cout << "Do numbers enter karo: ";
    cin >> num1 >> num2;
    
    // Function ko call kiya aur result print kiya
    int ans = gcd(num1, num2);
    cout << "GCD (HCF) hai: " << ans << endl;
    
    return 0;
}

// TC isTime Complexity (TC): $(\log_{\min(a, b)}(\min(a, b))) ya simple words me $O(\log(\min(a, b)))$Kyunki har modulo step me, ek number bohot tezi se chota (lagbhag aadha ya usse bhi kam) ho jata hai, iski complexity logarithmic scale par chali jati hai. Yeh duniya ka sabse tej tareen tarika hai do numbers ka GCD nikalne ka.
// SC is linear O(1) no extra space are used