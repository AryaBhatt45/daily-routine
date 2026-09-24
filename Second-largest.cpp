#include <iostream>
#include <vector>
using namespace std;

//second largest brute forece approach
int longest(const vector<int> &arr)
{
    int n = arr.size();
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    int Slargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > Slargest && arr[i] != largest)
        {
            Slargest = arr[i];
        }
    }

    return Slargest;
}

int main()
{
    vector<int> arr = {4, 5, 2, 3, 1};

    int max = longest(arr);
    cout << "The  Second largest  value is  : " << max;
    return 0;
}