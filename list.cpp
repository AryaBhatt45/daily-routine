#include <iostream>
#include <list>

using namespace std;

int main()
{
    // list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // // Print list elements
    // for (string car : cars)
    // {
    //     cout << car << "\n";
    // }

    list<int> myNum;

    myNum.push_back(12);
    myNum.push_back(13);
    myNum.push_back(15);
    myNum.pop_back();

    myNum.back() = 10;

    for (int x : myNum)
    {
        cout << x << " ";
    }

    cout << endl;
}
