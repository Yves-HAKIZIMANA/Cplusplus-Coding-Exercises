#include <iostream>
#include <set>
#include <cmath>

using namespace std;

void printIntegerPairs() {
    set<pair<int, int>> pairSet;

    for (int a = 2; a < 100; a++) {
        for (int b = a; b < 100; b++) {
            int cSquare = a * a + b * b;
            int c = (int)sqrt(cSquare);
            if (c * c == cSquare && c < 100) {
                pairSet.insert({a, b});
            }
        }
    }

    cout << "Pairs satisfying the hypotenuse rule: " << endl;
    for (auto &pair : pairSet) {
        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
    }
    cout << "Number of pairs found: " << pairSet.size() << endl;
}

int main() {
    printIntegerPairs();
    return 0;
}
