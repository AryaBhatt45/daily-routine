#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <queue>
#include <unordered_map>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    // stack<int> s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);
    //    stack<int> s={1,2,3,4,5};
    //     s.pop();

    //     while (!s.empty())
    //     {
    //         cout << s.top() << endl;
    //         s.pop();
    //         // cout<<s1<<endl;
    //     }
    //     return 0;

    // vector<int> v = {1, 2, 3, 4, 5};
    // for(iter_swap(v.begin(), v.end() - 1); v.begin() != v.end(); iter_swap(v.begin(), v.end() - 1))
    // {
    //     cout << *v.begin() << endl;
    //     v.erase(v.begin());
    // }
    // v.push_back(6);
    // v.erase(v.begin());
    // v.pop_back();
    // v.insert(v.begin() +5 , 7);

    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<endl;
    // }
    // cout<<"Oth index value is :"<<v[0]<<endl;
    // cout << v.front() +2 << endl<<v.back()<<endl;
    // for (int val : v)
    // {
    //     cout << val << endl;
    // }

    // list<int> l;
    // l.push_back(1);
    // l.push_back(2);
    // l.push_back(3);
    // l.push_back(4);

    // l.erase(l.begin());  // Erases the first element

    //   hm kis particular value pe pop nhi kar skte
    // l.pop_back();
    // for (int val : l)
    // {
    //     cout << val << endl;
    // }

    // deque<int> d;
    // d.push_back(1);
    // d.push_back(2);
    // d.push_back(3);
    // d.push_back(4);

    // d.pop_back();
    // for(int val : d)
    // {
    //     cout << val << endl;
    // }
    // cout << "Size of deque is: " << d.size() << endl;
    // cout<<"the 0th index value is :"<<d[0]<<endl;

    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);
    // q.push(6);

    // while (!q.empty()){

    //     cout << q.front() << endl;
    //     q.pop();
    // }
    // for(int i=0; i<q.size(); i++){
    //     cout<<q.front()<<endl;
    //     q.pop();
    // }

    // unordered_map<string , int> m;
    // m["Alice"] = 25;
    // m["Bob"] = 30;
    // m["Charlie"] = 35;

    // m.insert({"David", 40});
    // m.erase("Bob");

    // for ( auto p : m) {
    //     cout << p.first << ": " << p.second << endl;
    // }

    // set<int> s = {1, 2, 3, 4, 5, 5, 4};
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);

    // auto it2 = s.find(6);
    // if (it2 == s.end())
    // {
    //     cout << "Element not found" << endl;
    // }
    // else
    // {
    //     cout << "Element found: " << *it2 << endl;
    // }
    // s.erase(2); // Erases the element with value 2
    // cout << s.size() << endl;
    // for (int val : s)
    // {
    //     cout << val << endl;
    // }

    // vector<int> v = {1, 2, 5, 4, 3};
    // sort(v.begin(), v.end());

    // int arr[] = {5, 2, 8, 1, 3};
    // int n = sizeof(arr) / sizeof(arr[0]);

    // // Ascending order mein sort karne ke liye
    // sort(arr, arr + n);

    // for (int val : arr)
    // {
    //     cout << val << " "; // Output: 1 2 3 5 8
    // }

    // for (int val : v)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // vector<int> v = {1, 2, 3, 4, 5};
    // reverse(v.begin(), v.end());
    // for (int val : v)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    int num = 52813;
    
    string str = to_string(num);
    reverse(str.begin(), str.end()); // String ko ulta kar dega
    int reversedNum = stoi(str);
    
    cout << "Reversed Number: " << reversedNum << endl; // Output: 31825
    


    return 0;
}
