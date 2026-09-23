#include <iostream>
#include <set> 

using namespace std;

int main()
{
    set<int> s;

    // 1. INSERT OPERATION (Data insert karna)
    s.insert(40);
    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(10); // Duplicate value! Yeh insert nahi hogi

    cout << "--- Set Elements (Sorted & Unique) ---" << endl;
    // Set ko print karne ke liye normal loop chal jata hai
    for (int x : s) {
        cout << x << " ";
    }
    cout << "\n\nSize of set: " << s.size() << endl;


    
    
    cout << "\n--- Checking Elements ---" << endl;
    if (s.count(30)) {
        cout << "30 set ke andar maujood hai!" << endl;
    } else {
        cout << "30 set me nahi hai." << endl;
    }


    // 3. ERASE OPERATION (Element ko delete karna)
    s.erase(20); // 20 ko set se uda diya

    cout << "\n--- Set Elements After Erase (20 removed) ---" << endl;
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
} 