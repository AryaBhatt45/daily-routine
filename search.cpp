#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] >= target) {
                return i;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 6};
    
    cout << "Index: " << sol.searchInsert(nums, 5) << endl; // Output: 2
    cout << "Index: " << sol.searchInsert(nums, 2) << endl; // Output: 1
    cout << "Index: " << sol.searchInsert(nums, 7) << endl; // Output: 4
    
    return 0;
}