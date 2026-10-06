#include <iostream>
#include <vector>
using namespace std;

int mostConsecutive(const vector<int> &arr)
{
    int n = arr.size();
    int maxCount = 1, count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1] + 1)
        {
            count++;
        }
        else
        {
            maxCount = max(maxCount, count);
            count = 1;
        }
    }
    maxCount = max(maxCount, count);
    return maxCount;
}

int main()
{
    vector<int> arr = {1, 2, 3, 5, 6, 7, 8, 10};
    int result = mostConsecutive(arr);
    cout << "The length of the longest consecutive sequence is: " << result << endl;
    return 0;
}