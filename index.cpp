#include <iostream>
#include <vector>
using namespace std;

int smallestIndex(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int num = nums[i];
        int digitSum = 0;
        while (num > 0)
        {
            digitSum += num % 10;
            num /= 10;
        }
        if (digitSum == i)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {4, 5, 2, 3, 1};

    int max = smallestIndex(arr);
    cout << "The  max : " << max;
    return 0;
}