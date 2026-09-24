#include <iostream>

using namespace std;

int pattern(int n)
{

    for (int i = 0; i <= n; i++)
    {
        // spaces
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
int main()
{
    int n;
    cout << " Enter :";
    cin >> n;
    pattern(n);
    return 0;
}