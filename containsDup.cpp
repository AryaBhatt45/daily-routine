#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
 
bool containsDuplicate( vector <int>& nums){
    int n = nums.size();
    unordered_set<int> ans;
    for(int i =0; i<n; i++){
        if(ans.find(nums[i]) != ans.end()){
            return true;
        }
        ans.insert(nums[i]);
    }
    return false;
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 1};
    bool result = containsDuplicate(nums);
    
    if(result){
        cout << "The array contains duplicates." << endl;
    } else {
        cout << "The array does not contain duplicates." << endl;
    }

    return 0;
}