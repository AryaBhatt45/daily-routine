#include <iostream>
using namespace std;

int sumOfDigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n;
    cout<<" Enter the Number :";
    cin >> n;
    cout << sumOfDigit(n) << endl;
    return 0;
}