#include <bits/stdc++.h>

using namespace std;

void primeNum(int i, int n)
{
    if (i > n)
    {
        return;
    }

    cout << i << endl;
    primeNum(i + 1, n);
}

int main()
{
    int n;
    cout << "enter the value of n:";
    cin >> n;
    primeNum(1, n);
    return 0;
}