#include <iostream>
#include <map>   
#include <string>

using namespace std;

int main()
{
    // map<Key_Type, Value_Type> m;
    // Hum roll number (int) ke sath student ka naam (string) jod rahe hain
    map<int, string> student;

    // 1. INSERT OPERATION (Data daalna - Do tarike hote hain)
    student[101] = "Amit";
    student[102] = "Rahul";
    student[103] = "Vijay";
    
    // Agar pehle se maujood key par dobara value daaloge, toh wo update ho jayegi
    student[102] = "Aryan"; // Roll 102 par ab Rahul ki jagah Aryan ho gaya

    cout << "--- Map Elements (Roll No : Name) ---" << endl;
    // Map ko print karne ke liye '.first' se Key aur '.second' se Value milti hai
    // Yeh hamesha Keys ke hisab se automatically sorted (chote se bade) rehta hai
    for (auto pair : student) {
        cout << "Roll No: " << pair.first << " -> Name: " << pair.second << endl;
    }


    cout << "\n--- Accessing Elements ---" << endl;
    // Kisi specific key ki value ko direct access karna
    cout << "Roll Number 103 par kaun hai: " << student[103] << endl;


    // 2. FIND / COUNT OPERATION (Check karna ki Key hai ya nahi)
    cout << "\n--- Checking Keys ---" << endl;
    if (student.count(105)) {
        cout << "Roll 105 data me hai." << endl;
    } else {
        cout << "Roll 105 ka koi data nahi mila!" << endl;
    }


    // 3. ERASE OPERATION (Data delete karna Key ke zariye)
    student.erase(101); // Roll 101 ka data uda diya

    cout << "\n--- Map After Erase (Roll 101 removed) ---" << endl;
    for (auto pair : student) {
        cout << "Roll No: " << pair.first << " -> Name: " << pair.second << endl;
    }

    return 0;
}     