#include <bits/stdc++.h>
#include <iostream>

using namespace std;
// O(n) time complexity beacause it takes one array lopp only and space complexity is linear
void printDevision(int n)
{
    vector<int> ls;
    // for(int i=1; i <=n; i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }

    // }
    // cout <<endl;

    // for(int i=1; i<=sqrt(n); i++){
    //     if(n%i==0){
    //         cout <<i<<" ";
    //         if(i !=n/i){
    //             cout <<n/i<< endl;

    //         }
    //     }
    // }
    // cout <<endl;
    // here O(n^2) tc
    for (int i = 1; i*i <= n; i++)  
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if (i != n / i)
            {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());

    for (auto id : ls)
    {
        cout << id << " ";
    }
    cout << endl;
};
// O(\sqrt{N}) + O(K \log K) space complexity is O(k) beacause we use vector

int main()
{
    int n;
    cin >> n;
    printDevision(n);
    return 0;
}