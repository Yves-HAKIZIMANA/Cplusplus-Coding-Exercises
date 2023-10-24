#include <iostream>
#include <ctime>
using namespace std;

void displayDateTime(){
    // Current time based on the current system
    time_t now = time(0);

    // Convert now to string form
    char *dt = ctime(&now);
    cout << "The local date and time is " << dt << endl;
}

int main(){
    displayDateTime();
}