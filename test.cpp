#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <=i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    //

    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 0; j<n-i-1; j++)
    //     {
    //         cout << "* "<<" ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 1; j <=n-i-1; j++)
    //     {
    //         cout << j<<" ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     // 1. Pehla Inner Loop: Spaces print karne ke liye (n - i - 1) baar
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " "; // Sirf ek single space
    //     }
        
    //     // 2. Dusra Inner Loop: Stars print karne ke liye (i + 1) baar 
    //     // Kyunki hum star ke sath space "* " chhap rahe hain, toh ye apne aap triangle bana dega!
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "* "; 
    //     }
        
    //     cout << endl; // Line change
    // }

    for (int i = 0; i < n; i++)
    {
        // 1. Pehla Inner Loop: Spaces print karne ke liye (i) baar
        for (int j = 0; j < i; j++)
        {
            cout << " "; // Ek single space
        }
        
        // 2. Dusra Inner Loop: Stars print karne ke liye (n - i) baar
        for (int j = 0; j < n - i; j++)
        {
            cout << "* "; // Star ke sath space
        }
        
        cout << endl; // Row khatam, line change
    }
};

int main()
{
    int n;
    cout << "enter the num:";
    cin >> n;

    print(n);
}