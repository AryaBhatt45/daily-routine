#include <iostream>

using namespace std;

class Solution
{
public:
    // void checkPrime(int n)
    // {
    //     int cnt;
    //     for (int i = 1; i * i <= n; i++)
    //     {
    //         if (n % i == 0)
    //         {
    //             cnt++;
    //             if ((n / i) != i)
    //                 cnt++;
    //         }
    //     }

    //     if (cnt == 2)
    //     {
    //         cout << "prime";
    //     }
    //     else
    //     {
    //         cout << "not prime";
    //     }
    // }

    // TC is O(N^2) and space is linear O(1)
    bool isPrime(int n) {
    if (n <= 1) return false; // 0 aur 1 prime nahi hote
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // 1 aur khud ke alawa koi aur divisor milte hi ruk jao
        }
    }
    return true; 
}
};

int main(){
    Solution obj;
    int n;
    
    cout << "Enter a number: ";
    cin >> n;
    
    // Function ko call kiya
    obj.isPrime(n);
    
    return 0;
}