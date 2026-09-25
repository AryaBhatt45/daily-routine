#include <iostream>
#include <vector>
#include <set>

using namespace std;

int duplicate(vector<int> &arr)
{
    if (arr.empty())
        return 0;

    int i = 0;
    int n = arr.size();

    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main()
{
   vector<int> arr = {1, 1, 2, 2, 3, 4};
    int k = duplicate(arr);
    
    cout << "Unique count: " << k << endl;
    cout << "Unique elements: ";
    
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}