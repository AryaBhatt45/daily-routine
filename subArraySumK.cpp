#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int subArraySum1(vector<int> &arr, int k)
{
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                count++;
            }
        }
    }
    return count;
}

int subarraySum2(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    mp[0] = 1;

    int preSum = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        preSum += nums[i];
        int remove = preSum - k;
        count += mp[remove];
        mp[preSum]++;
    }

    return count;
}

int main()
{
    vector<int> arr = {1, 3, 4, 6, 2};
    cout << "Sub array Sum is" << subarraySum2(arr, 7);
    return 0;
}