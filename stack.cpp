#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    // 1. Stack Create Kiya (String data type ka)
    stack<string> cars;

    cout << "--- 1. PUSH OPERATION (Data Insert Karna) ---" << endl;
    // push() hamesha stack ke sabse upar element nikal/daal deta hai (LIFO)
    cars.push("bmw");
    cars.push("toyoto");
    cars.push("ford"); 
    cout << "Stack me 3 cars push kar di hain: bmw, toyoto, ford" << endl;


    cout << "\n--- 2. TOP OPERATION (Sabse Upar Ka Element Dekhna) ---" << endl;
    // top() se pata chalta hai ki sabse upar kaun baitha hai
    cout << "Abhi sabse upar (Top) kaunsi car hai: " << cars.top() << endl;


    cout << "\n--- 3. SIZE OPERATION (Stack ki Length Check Karna) ---" << endl;
    // size() batata hai ki stack me total kitne elements hain
    cout << "Stack ka total size abhi kya hai: " << cars.size() << endl;


    cout << "\n--- 4. POP OPERATION (Top Element Ko Udana) ---" << endl;
    // pop() sabse upar wale element (ford) ko delete kar dega
    cars.pop();
    cout << "Pop operation perform kiya! (Ford delete ho gayi)" << endl;
    
    // Pop karne ke baad ab top check karte hain
    cout << "Ford nikalne ke baad ab naya Top kya hai: " << cars.top() << endl;
    cout << "Naya size kya hai: " << cars.size() << endl;


    cout << "\n--- 5. EMPTY OPERATION (Check Karna Ki Stack Khali Hai Ya Nahi) ---" << endl;
    // empty() agar 1 return kare toh matlab stack khali hai, 0 matlab elements hain
    if (cars.empty()) {
        cout << "Stack ekdam khali hai!" << endl;
    } else {
        cout << "Stack khali nahi hai, isme abhi bhi " << cars.size() << " cars hain." << endl;
    }

    return 0;        
}