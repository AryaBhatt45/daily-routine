#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t now = time(0);
    
    // tm structure me time ko break kiya (local time ke hisab se)
    tm *ltm = localtime(&now);

    // Alag-alag pieces ko print karna
    // Note: ltm->tm_year me 1900 se saal count hota hai, isliye +1900 karte hain
    // Note: ltm->tm_mon 0 se shuru hota hai (0 = Jan), isliye +1 karte hain
    
    cout << "Year: " << 1900 + ltm->tm_year << endl;
    cout << "Month: " << 1 + ltm->tm_mon << endl;
    cout << "Date: " << ltm->tm_mday << endl;
    
    // Format karke DD/MM/YYYY me dikhana:
    cout << "Formatted Date: " << ltm->tm_mday << "/" << 1 + ltm->tm_mon << "/" << 1900 + ltm->tm_year << endl;

    return 0;
}