// #include<iostream>
// #include<vector>
// #include<algorithm> 

// using namespace std;

// int main(){
//     vector<int> v = {12, 10, 11, 14, 13}; 

//     cout << "Original vector: ";
//     for(int x : v) 
//     //  Sort ko loop ke bahar likha
//     reverse(v.begin(), v.end()); 

//     cout << "reverse Vector: ";
//     for(int x : v) {
//         cout << x << " "; 
//     }     
    
//     cout << endl; 
//     return 0;
// }

// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
//     // 1. Semicolon add kiya
//     vector<int> v={12,10,11,14,13}; 

//     cout << "original vector is :";
//     for(int x : v) {
//         // 2. << endl ka syntax theek kiya aur space diya
//         cout << " " << x; 
//     }
    
//     cout << endl; // Line change karne ke liye loop ke bahar
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm> // sort aur reverse ke liye

using namespace std;

int main() {
    vector<int> v;

    // --- 1. PUSH_BACK (Data Daalna) ---
    v.push_back(40);
    v.push_back(10);
    v.push_back(30);
    v.push_back(20);
    v.push_back(50);

    cout << "Original Vector: ";
    for (int x : v) cout << x << " "; // Output: 40 10 30 20 50
    cout << endl;

    // --- 2. POP_BACK (Aakhiri Element Hatana) ---
    v.pop_back(); // Yeh 50 ko nakar dega
    cout << "After pop_back(): ";
    for (int x : v) cout << x << " "; // Output: 40 10 30 20
    cout << endl;

    // --- 3. ACCESS ELEMENTS (Data Dekhna) ---
    cout << "Front (Pehla) Element: " << v.front() << endl; // Output: 40
    cout << "Back (Aakhiri) Element: " << v.back() << endl;   // Output: 20
    cout << "Index 2 par kaun hai: " << v.at(2) << endl;     // Output: 30 (v[2] bhi likh sakte hain)

    // --- 4. INSERT (Beech me Data Daalna) ---
    // v.begin() yani pehla element, usme +1 kiya toh index 1 par 100 insert hoga
    v.insert(v.begin() + 1, 100); 
    cout << "After insert at index 1: ";
    for (int x : v) cout << x << " "; // Output: 40 100 10 30 20
    cout << endl;

    // --- 5. ERASE (Beech se Data Hatana) ---
    // Agar index 2 (jo ki 10 hai) ko hatana ho:
    v.erase(v.begin() + 2);
    cout << "After erase at index 2: ";
    for (int x : v) cout << x << " "; // Output: 40 100 30 20
    cout << endl;

    // --- 6. SORT & REVERSE (Sajane ka Tareeka) ---
    // Chote se bada (Ascending Order) karne ke liye:
    sort(v.begin(), v.end());
    cout << "Sorted Vector: ";
    for (int x : v) cout << x << " "; // Output: 20 30 40 100
    cout << endl;

    // Ulat dene (Reverse) ke liye:
    reverse(v.begin(), v.end());
    cout << "Reversed Vector: ";
    for (int x : v) cout << x << " "; // Output: 100 40 30 20
    cout << endl;

    // --- 7. SIZE & CAPACITY (Kitni Jagah Hai) ---
    cout << "Total Elements (Size): " << v.size() << endl; // Output: 4
    
    // --- 8. CLEAR (Sab Saaf) ---
    v.clear(); // Poora vector khali kar dega
    cout << "Is vector empty? " << (v.empty() ? "Yes" : "No") << endl; // Output: Yes

    return 0;
}