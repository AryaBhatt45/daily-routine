#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 3, 4, 5, 1};
    int target = 5;
    int index = linearSearch(arr, target);
    if (index != -1)
    {
        cout << "Element at found : " << index << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}