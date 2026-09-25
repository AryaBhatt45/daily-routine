#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int left = 0;
    for (int right = 0; right < nums.size(); right++)
    {
        if (nums[right] != 0)
        {
            swap(nums[left], nums[right]);
            left++;
        }
    }
}
int main()
{
    vector<int> nums = {0, 1, 0, 2, 0, 3};
    moveZeroes(nums);
    cout << "Array after moving zeroes: ";
    for (int x : nums)
    {
        cout << x << " ";
    }

    return 0;
}
