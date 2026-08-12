#include <iostream>
using namespace std;

// Pure Simple Logic: Har step par check karo konse color ki ball rakh sakte hain
int countWays(int g, int y, int r, char lastBall) {
    // Agar saari balls khatam ho gayi, to 1 valid rasta mil gaya
    if (g == 0 && y == 0 && r == 0) return 1;

    int total = 0;
    if (g > 0 && lastBall != 'G') {
        total += countWays(g - 1, y, r, 'G');
    }
    if (y > 0 && lastBall != 'Y') {
        total += countWays(g, y - 1, r, 'Y');
    }
    if (r > 0 && lastBall != 'R') {
        total += countWays(g, y, r - 1, 'R');
    }

    return total;
}

int main() {
    int g, y, r;
    cin >> g >> y >> r;
    cout << countWays(g, y, r, 'N') << endl;

    return 0;
}
