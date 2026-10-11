#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <bits/stdc++.h>
using namespace std;

// vector<vector<int>> fourSum(vector<int> &nums, int target)
// {
//     int n = nums.size();
//     set<vector<int>> st;

//     for (int i = 0; i < n - 3; i++)
//     {
//         for (int j = i + 1; j < n - 2; j++)
//         {
//             for (int k = j + 1; k < n - 1; k++)
//             {
//                 for (int l = k + 1; l < n; l++)
//                 {
//                     long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
//                     if (sum == target)
//                     {
//                         vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
//                         sort(temp.begin(), temp.end());
//                         st.insert(temp);
//                     }
//                 }
//             }
//         }
//     }
//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }

// vector<vector<int>> fourSum(vector<int> &nums, int target)
// {
//     vector<vector<int>> result;
//     sort(nums.begin(), nums.end());
//     int n = nums.size();

//     for (int i = 0; i < n - 3; i++)
//     {
//         if (i > 0 && nums[i] == nums[i - 1])
//             continue;

//         for (int j = i + 1; j < n - 2; j++)
//         {
//             if (j > i + 1 && nums[j] == nums[j - 1])
//                 continue;

//             int left = j + 1;
//             int right = n - 1;

//             while (left < right)
//             {
//                 long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
//                 if (sum == target)
//                 {
//                     result.push_back({nums[i], nums[j], nums[left], nums[right]});
//                     while (left < right && nums[left] == nums[left + 1])
//                         left++;
//                     while (left < right && nums[right] == nums[right - 1])
//                         right--;
//                     left++;
//                     right--;
//                 }
//                 else if (sum < target)
//                 {
//                     left++;
//                 }
//                 else
//                 {
//                     right--;
//                 }
//             }
//         }
//     }

//     return result;
// }
vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    int n = nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            unordered_set<long long> hashset;
            for (int k = j + 1; k < n; k++)
            {
                long long sum = nums[i] + nums[j];
                sum += nums[k];
                long long last = (long long)target - sum;
               if (hashset.find(last) != hashset.end()) {
                    vector<int> temp = {nums[i], nums[j], nums[k], (int)last};
                    sort(temp.begin(), temp.end()); // Unique order ke liye sort kiya
                    st.insert(temp);
                }
                hashset.insert(nums[k]);
            }
        }
    }
    return vector<vector<int>>(st.begin(), st.end());
}
int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = fourSum(nums, target);

    cout << "Unique quadruplets that sum to " << target << ":" << endl;
    for (const auto &quadruplet : result)
    {
        cout << "[";
        for (size_t i = 0; i < quadruplet.size(); i++)
        {
            cout << quadruplet[i];
            if (i < quadruplet.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}