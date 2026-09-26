#include <iostream>
#include <vector>
using namespace std;

void leftRotate(vector<int> &arr)
{
    int n = arr.size();
    if (n <= 1)
        return;

    int temp = arr[0];

    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }

    arr[n - 1] = temp;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    leftRotate(arr);
    cout << "Array after moving zeroes: ";
    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}
