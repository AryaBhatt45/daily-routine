#include <iostream>
#include <vector>
using namespace std;

int subArraySum(vector<int> &arr, int k)
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

int main()
{
    vector<int> arr = {1, 3, 4, 6, 2};
    cout << "Sub array Sum is" << subArraySum(arr, 7);
    return 0;
}