#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    vector<int> arr = {2, 3, 4, 5, 1, 6};
    bubbleSort(arr);
    cout << "Sorted array : ";
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}