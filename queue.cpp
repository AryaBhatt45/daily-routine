#include <iostream>
#include <queue>   
#include <string>

using namespace std;

int main()
{
    
    queue<string> line;

    cout << "--- 1. PUSH / ENQUEUE OPERATION (Line Me Lagna) ---" << endl;
    // push() hamesha queue ke sabse peeche (back) element ko insert karta hai
    line.push("Rahul");   // Sabse pehle aaya (Front)
    line.push("Amit");
    line.push("Vijay");   // Sabse aakhiri me aaya (Back)
    cout << "Line me 3 log khade ho gaye hain: Rahul, Amit, Vijay" << endl;


    cout << "\n--- 2. FRONT & BACK OPERATION (Aage Aur Peeche Ka Element Dekhna) ---" << endl;
    // front() batata hai line me sabse aage kaun hai (jiska number pehle aayega)
    cout << "Line me sabse aage (Front) kaun khada hai: " << line.front() << endl;
    
    // back() batata hai line me sabse peeche ekdam aakhiri me kaun khada hai
    cout << "Line me sabse peeche (Back) kaun khada hai: " << line.back() << endl;


    cout << "\n--- 3. SIZE OPERATION (Line Ki Length Check Karna) ---" << endl;
    // size() batata hai line me total kitne log hain
    cout << "Line me abhi total kitne log hain: " << line.size() << endl;


    cout << "\n--- 4. POP / DEQUEUE OPERATION (Line Se Bahar Nikalna) ---" << endl;
    // pop() hamesha line ke SABSE AAGE wale (Rahul) ko bahar nikalega (FIFO)
    line.pop();
    cout << "Pop operation perform kiya! (Rahul ko ticket mil gaya aur wo line se bahar gaya)" << endl;
    
    // Pop karne ke baad ab naya front aur size check karte hain
    cout << "Rahul ke jaane ke baad ab naya sabse aage (Front) kaun hai: " << line.front() << endl;
    cout << "Ab line me kitne log bache hain: " << line.size() << endl;


    cout << "\n--- 5. EMPTY OPERATION (Check Karna Ki Line Khali Hai Ya Nahi) ---" << endl;
    // empty() agar 1 return kare toh queue khali hai, 0 matlab elements hain
    if (line.empty()) {
        cout << "Line ekdam khali ho chuki hai!" << endl;
    } else {
        cout << "Line khali nahi hai, abhi bhi " << line.size() << " log khade hain." << endl;
    }

    return 0;        
}         