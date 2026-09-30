#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int majorityElement(vector<int>& nums) {
    unordered_map<int, int> mp;
    int n = nums.size();

    for (int x : nums) {
        mp[x]++;
        if (mp[x] > n / 2) {
            return x;
        }
    }

    return -1; 
}

int main() {
    
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int result = majorityElement(nums);

    if (result != -1) {
        cout << "Majority Element is: " << result << endl;
    } else {
        cout << "No Majority Element found." << endl;
    }

    return 0;
}