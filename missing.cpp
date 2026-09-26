#include <iostream>
#include <vector>
using namespace std;

int missingNum(vector<int> &arr)
{
    int n = arr.size() - 1;
    for (int i = 1; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < arr.size() - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }
    return -1;
}

int missingNumSum(vector<int> &arr) {
    int n = arr.size() + 1;
    int expectedSum = (n * (n + 1)) / 2;
    
    int actualSum = 0;
    for (int x : arr) {
        actualSum += x;
    }
    
    return expectedSum - actualSum;
}

int main()
{
    vector<int> arr = {1, 2, 4, 5, 6};

    int ans = missingNumSum(arr);
    cout << "Missing num is :" << ans << endl;
    return 0;
}
