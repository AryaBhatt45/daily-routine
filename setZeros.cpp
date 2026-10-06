#include<iostream>
#include<vector>
using namespace std;

void setZeros(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    if (rows == 0) return;
    int cols = matrix[0].size();
    
    vector<bool> rowFlag(rows, false);
    vector<bool> colFlag(cols, false);
    
    // First pass to find the rows and columns that need to be zeroed
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == 0) {
                rowFlag[i] = true;
                colFlag[j] = true;
            }
        }
    }
    
    // Second pass to set the rows to zero
    for (int i = 0; i < rows; ++i) {
        if (rowFlag[i]) {
            for (int j = 0; j < cols; ++j) {
                matrix[i][j] = 0;
            }
        }
    }
    
    // Third pass to set the columns to zero
    for (int j = 0; j < cols; ++j) {
        if (colFlag[j]) {
            for (int i = 0; i < rows; ++i) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };
    
    setZeros(matrix);
    
    cout << "Matrix after setting zeros:" << endl;
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
    
    return 0;
}