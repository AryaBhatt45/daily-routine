#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &arr)
{
    int max1 = 0;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            count++;
            max1 = max(max1, count);
        }
        else
        {
            count = 0;
        }
    }
    return max1;
}

int main()
{
    vector<int> arr = {1, 0, 1, 1, 0, 1, 1, 1};
    cout << "Max Consecutive Ones: " << findMaxConsecutiveOnes(arr) << endl;
}