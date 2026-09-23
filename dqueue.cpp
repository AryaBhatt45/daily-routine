#include <iostream>
#include <deque> 
using namespace std;

int main()
{
    deque<int> dq;

    // 1. PUSH OPERATIONS (Dono taraf se data daalna)
    dq.push_back(20);  // Peeche se daala -> [20]
    dq.push_back(30);  // Peeche se daala -> [20, 30]
    dq.push_front(10); // Aage se ghusaya  -> [10, 20, 30]

    cout << " Initial Deque Elements" << endl;
    for(int x : dq) {
        cout << x << " ";
    }
    cout << "\n\nSize of deque: " << dq.size() << endl;
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;


    // 2. POP OPERATIONS (Dono taraf se data nikalna)
    dq.pop_front(); // Aage se 10 ko uda diya -> [20, 30]
    dq.pop_back();  // Peeche se 30 ko uda diya -> [20]

    cout << " Elements After Pop operations-" << endl;
    for(int x : dq) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}