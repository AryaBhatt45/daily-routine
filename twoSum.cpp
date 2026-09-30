#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
                return {i, j};
        }
    }
    return {};
}

int main()
{
    vector<int> arr = {2, 4, 5, 1, 6};
    vector<int> ans = twoSum(arr, 9);

    if (!ans.empty())
    {
        cout << "Indices are : " << ans[0] << " and " << ans[1] << endl;
    }
    else
    {
        cout << "No pair found!" << endl;
    }
    return 0;
}