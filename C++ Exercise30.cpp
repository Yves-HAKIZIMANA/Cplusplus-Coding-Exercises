#include <iostream>
#include <set>

using namespace std;

int countDigits(int number, int digit) {
    if (number < 0 || digit < 0) {
        return -1;
    }

    int count = 0;
    while (number > 0) {
        if (number % 10 == digit) {
            count++;
        }
        number /= 10;
    }

    return count;
}


int main(){
    int digits = countDigits(3, 3);
    cout << digits;
}

