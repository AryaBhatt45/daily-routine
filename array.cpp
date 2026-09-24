#include <iostream>
#include <vector>
using namespace std;

int longest(const vector<int> &arr)
{
    int n = arr.size();
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    
    return largest;
}

int main()
{
    vector<int> arr = {4, 5, 2, 3, 1};

    int max = longest(arr);
    cout << "The largest  value is  : " << max;
    return 0;
}