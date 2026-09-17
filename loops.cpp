#include <iostream>
using namespace std;

void pattern1(int n)

{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << i;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << i;
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // 1. Spaces print karne ke liye loop
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // 2. Stars print karne ke liye loop
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        // 3. Har row ke baad nayi line par jane ke liye (Loop ke ANDAR)
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = n; i >= 1; i--)
    {
        // 1. Spaces print karne ke liye (0 se lekar n-1 tak spaces)
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // 2. Stars print karne ke liye (Odd numbers: 2*i - 1)
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        // 3. New line har row ke baad
        cout << endl;
    }
}

int main()
{
    int n;
    cout << " Enter a Number:";
    cin >> n;
    pattern7(n);
    return 0;
}