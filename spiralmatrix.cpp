#include <iostream>
#include <vector>
using namespace std;

vector<int> SpiralOrder(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<int> ans;
    int left = 0, right = n - 1, top = 0, bottom = n - 1;

    while (left <= right && top <= bottom)
    {
        // Fill the top row
        for (int j = left; j <= right; ++j)
        {
            ans.push_back(matrix[top][j]);
        }
        ++top;

        // Fill the right column
        for (int i = top; i <= bottom; ++i)
        {
            ans.push_back(matrix[i][right]);
        }
        --right;

        if (top <= bottom)
        {
            // Fill the bottom row
            for (int j = right; j >= left; --j)
            {
                ans.push_back(matrix[bottom][j]);
            }
            --bottom;
        }

        if (left <= right)
        {
            // Fill the left column
            for (int i = bottom; i >= top; --i)
            {
                ans.push_back(matrix[i][left]);
            }
            ++left;
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = SpiralOrder(matrix);

    cout << "Spiral order of the matrix:" << endl;
    for (const auto &elem : result)
    {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}   