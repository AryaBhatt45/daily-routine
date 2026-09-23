#include <iostream>
#include <vector>
#include <algorithm> 
#include <numeric>
using namespace std;

int main() {
    vector<int> v = {40, 10, 30, 50, 20, 30};

    // 1. SORT (Chote se bada arrange karna)
    // syntax: sort(start_iterator, end_iterator);
    sort(v.begin(), v.end()); 
    cout << "1. Sorted Vector: ";
    for(int x : v) cout << x << " "; // Output: 10 20 30 30 40 50
    cout << endl;


    // 2. REVERSE (Ulta kar dena)
    reverse(v.begin(), v.end());
    cout << "2. Reversed Vector: ";
    for(int x : v) cout << x << " "; // Output: 50 40 30 30 20 10
    cout << endl;


    // Waapas normal sort kar dete hain aage ke operations ke liye
    sort(v.begin(), v.end()); // v ab fir se: 10 20 30 30 40 50


    // 3. MAX_ELEMENT & MIN_ELEMENT (Sabse bada aur sabse chota nikalna)
    // Yeh functions address (iterator) return karte hain, isliye value ke liye '*' lagate hain
    auto max_it = max_element(v.begin(), v.end());
    auto min_it = min_element(v.begin(), v.end());
    cout << "3. Max Element: " << *max_it << ", Min Element: " << *min_it << endl;


    // 4. ACCUMULATE (Saare elements ka SUM/Jod nikalna)
    // syntax: accumulate(start, end, initial_sum);
    int total_sum = accumulate(v.begin(), v.end(), 0);
    cout << "4. Total Sum of elements: " << total_sum << endl;


    // 5. COUNT (Koi element kitni baar aaya hai)
    int total_30s = count(v.begin(), v.end(), 30);
    cout << "5. Number 30 kitni baar aaya: " << total_30s << " baar" << endl;


    // 6. FIND (Kisi element ko dhoodhna)
    // Agar element mil jata hai toh uska iterator deta hai, nahi toh v.end() deta hai
    auto find_it = find(v.begin(), v.end(), 40);
    cout << "6. Find Operation: ";
    if (find_it != v.end()) {
        cout << "40 mil gaya!" << endl;
    } else {
        cout << "40 nahi mila." << endl;
    }


    
    cout << "7. Binary Search (Is 25 present?): " << binary_search(v.begin(), v.end(), 25) << endl;

    return 0;
}        