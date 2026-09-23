#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
#include <unordered_map>

using namespace std;

void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    //  loop start with 1 beacause index 0 is already sorted we let
    for (int i = 1; i < n; i++) 
    {
        // nyivalue jise sahi jagah rkhna ha 
        int key = arr[i];
        int j = i - 1;
        // left side element ko  right me tab tak sarkao jabtak ki vo key se bde ha 
        while (j >= 0 && arr[j] > key)
        {
            // Element ko right me shift kiya 
            arr[j + 1] = arr[j];  
            j--;
        }
        //  sahi jagah milte hi key ko insert kar do 
        arr[j + 1] = key;
    }
    

    int n=arr.size();
    // loop n-1 time chalega qki last element apne app sort ho jayega 
    for(int i=0; i< n-1; i++){
        // man lete ha ki current element hi sabse chhota ha 
        int min_idx=i;
        // bache huye unsorted element me sabse small element khojo
         for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min_idx]) {
                // nya chhota element milne pe use update kro 
                min_idx=j;
            }
         }
        //  sabse chhota current position i k sath swap kro 
        swap(arr[i], arr[min_idx]);
    }
}

//  quick sort  
// int partition(int arr[], int low, int high) {
//     int pivot = arr[high]; // last element ko pivot ke roop me lete ha
//     int i = (low - 1);    //  smaller element ka index

//     for (int j = low; j < high; j++) {
//         // agar current element pivot se chhota ya barabar hai to usse swap karo
//         if (arr[j] <= pivot) {
//             i++; 
//             swap(arr[i], arr[j]);
//         }
//     }
//     // Pivot swap
//     swap(arr[i + 1], arr[high]);
//     return (i + 1); // Pivot right position return karo
// }

// // main function for quick sort
// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         // p ko partition karke pivot ka sahi index return karo
//         int p = partition(arr, low, high);

//         // Pivot ke left aur right sub-arrays ko recursively sort karo
//         quickSort(arr, low, p - 1);
//         quickSort(arr, p + 1, high);
//     }
// }
// // tc O(n log n) and sc O(log n) for quick sort



// bool isSorted(const vector<int>& arr) {
//     for (size_t i = 1; i < arr.size(); ++i) {
//         if (arr[i] < arr[i - 1]) {
//             return false;
//         }
//     }
//     return true;
// }
// vector<int> twoSum(vector<int>& nums, int target)
// {
//     unordered_map<int, int> numMap; // Map to store numbers and their indices

//     for (int i = 0; i < nums.size(); ++i) {
//         int complement = target - nums[i]; // Calculate the complement
//         if (numMap.find(complement) != numMap.end()) {
//             // If the complement exists in the map, return the indices
//             return {numMap[complement], i};
//         }
//         // Store the current number and its index in the map
//         numMap[nums[i]] = i;
//     }
//     return {}; // Return an empty vector if no solution is found
// }

int main() {
    vector<int> nums = {2, 7, 11, 15};
    selectionSort();

    return 0;
}