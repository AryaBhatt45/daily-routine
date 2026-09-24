#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 1. Insertion Sort Function
void insertionSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// 2. Selection Sort Function
void selectionSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

// Array print karne ke liye utility function
void printVector(const vector<int> &arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    // Selection Sort Test
    vector<int> arr1 = {64, 25, 12, 22, 11};
    cout << "Original Array: ";
    printVector(arr1);

    selectionSort(arr1);
    cout << "Selection Sort Result: ";
    printVector(arr1);

    // Insertion Sort Test
    vector<int> arr2 = {5, 2, 9, 1, 5, 6};
    cout << "Original Array: ";
    printVector(arr2);

    insertionSort(arr2);
    cout << "Insertion Sort Result: ";
    printVector(arr2);

    return 0;
}