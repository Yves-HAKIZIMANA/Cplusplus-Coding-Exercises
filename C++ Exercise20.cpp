#include <iostream>

using namespace std;

int secondsToYears(long long seconds) {
    // 1 year = 365 days * 24 hours * 60 minutes * 60 seconds
    long long secondsInYear = 365 * 24 * 60 * 60;
    int years = seconds / secondsInYear;
    return years;
}

int main() {
    long long johnSeconds = 1000000000; // John's age in seconds
    int johnYears = secondsToYears(johnSeconds);
    cout << "John is " << johnYears << " years old." << endl;
    return 0;
}
