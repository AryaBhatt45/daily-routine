#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// int maxSubArray(vector<int>& nums) {
//     int currSum = 0;
//     int maxSum = INT_MIN;

//     for (int i = 0; i < nums.size(); i++) {
//         currSum += nums[i];
//         maxSum = max(currSum, maxSum);
        
//         if (currSum < 0) {
//             currSum = 0; 
//         }
//     }

//     return maxSum;
// }

int  maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++) {
        int currentSum = 0;
        
        for (int j = i; j < n; j++) {
            currentSum += nums[j]; 
            maxSum = max(maxSum, currentSum);
        }
    }

    return maxSum;
}
int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl; 
   
    return 0;
}