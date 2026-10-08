#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minSubArrayLen(int target, vector<int> &nums){
    int n =nums.size();
    int left =0;
    int currentSum =0;
    int minLength = INT_MAX;
    for(int right =0; right < n; right++){
        currentSum += nums[right];
        while(currentSum >= target){
            minLength = min(minLength, right - left + 1);
            currentSum -= nums[left];
            left++;
        }
    }
    return (minLength == INT_MAX) ? 0 : minLength;
}

int main(){
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    cout << "Minimum length of subarray with sum at least " << target << " is: " << minSubArrayLen(target, nums) << endl;
    return 0;
}