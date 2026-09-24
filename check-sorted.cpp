#include <iostream>
#include <vector>
using namespace std;

int sorted(const vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
             return false;
        }
        else
           return true;
    }
}

int main()
{
    vector<int> arr = {4, 5, 2, 3, 1};

    int sort = sorted(arr);
    cout << sort;
    return 0;
}